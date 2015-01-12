#include "functions.h"

/* global variables */
const char *protocol = "tcp";
char bufor;
ushort service_port = 4000;
pthread_mutex_t sock_mutex = PTHREAD_MUTEX_INITIALIZER;

void print_error( const char *message )
{
    perror(message);
    exit(EXIT_FAILURE);
}

void* main_loop( void *arg)
{
    struct sockaddr_in server_addr, client_addr;
    int sck, rcv_sck, rcv_len;
    int opt = 1;
    bzero(&server_addr, sizeof server_addr);
    bzero(&client_addr, sizeof client_addr);
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons (service_port);

    if ( ( sck=socket( PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
        print_error("Error occured");

    setsockopt (sck, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof opt);

    if ( bind( sck, (struct sockaddr*) &server_addr, sizeof server_addr) < 0)
        print_error("Cannot bind socket to port");

    if (listen (sck, QUEUE_LENGTH) < 0)
        print_error("Cannot listen");

    pthread_t client_thread;
    rcv_len = sizeof (struct sockaddr_in);

    while( true )
    {
        if ((rcv_sck = accept (sck, (struct sockaddr*) &client_addr, (socklen_t*) &rcv_len)) < 0)
            print_error("Error while connecting with client");
        if (rcv_sck >= 0)
        {
            cout << "New client connected! \n";
            if (pthread_create (&client_thread, NULL, find_action, &rcv_sck) != 0)
                print_error("Thread create error");
        }
        

    }
    close (rcv_sck);
    exit(EXIT_SUCCESS);
}

void* find_action( void* arg)
{
    Message message;
    int rcv_sck = *( (int *) arg);
    int received;
    while(true)
    {
        int count = 0;
        while( (received = read (rcv_sck, &bufor, 1)) > 0)
        {
            if (count == 0)
            {
                message.set_type(bufor - '0');
                count++;
                continue;
            }

            if(bufor == '\n')
            {
                recognize_message(message, rcv_sck); 
                message.clear();
                break;
            }
            message.append_data(&bufor);
            count++;
        }
    }
    
    return NULL;
}

void recognize_message(Message message, int sck)
{
    User user;
    Message_respond respond;
    ostringstream ss;
    switch(message.get_type())
    {
        case 0: // User sign up
            if(user.validate(message))
                user.signup();
            break;
        case 1: // User sign in
            if(user.signin(message))
            {
                cout<<"------ User "<<user.get_nickname()<< " is now logged in ------\n";
                ss << OK;
                write(sck, ss.str().c_str(), ss.str().length());
            }
            else
            {
                cout<<"------ User was unable to log in ------\n";
                ss << DENY;
                write(sck, ss.str().c_str(), ss.str().length());
            }
        case 2: // User logged, thread exit
            exit(EXIT_SUCCESS);
        default:
            break;
    }
}
