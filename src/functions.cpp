#include "functions.h"

/* global variables */
const char *protocol = "tcp";
char bufor;
ushort service_port = 4000;
pthread_mutex_t sock_mutex = PTHREAD_MUTEX_INITIALIZER;
mutex m;

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
            cout << "New client connected on socket " << rcv_sck << "!\n";
            if (pthread_create (&client_thread, NULL, find_action, &rcv_sck) != 0)
                print_error("Thread create error");
        }
    }
    close (rcv_sck);
    return NULL;
}

void* find_action( void* arg)
{
    Data message;
    int rcv_sck = *( (int *) arg);
    int received;
    int count = 0;
    bool run = true;
    while(run)
    {
        while( (received = read (rcv_sck, &bufor, 1)) > 0)
        {   
            cout << bufor << endl;
            if (count == 0)
            {
                message.set_type(bufor - '0');
                count++;
                continue;
            }

            if(bufor == '\n')
            {
                run = recognize_message(message, rcv_sck); 
                message.clear();
                count = 0;
                break;
            }
            message.append_data(&bufor);
            count++;
        }
    }
    return NULL;
}

bool recognize_message(Data message, int sck)
{
    User user;
    int type = message.get_type();

    if( type == Message::Request::SIGNUP )
    {
        if(user.validate(message))
        {
            user.signup();
            send_respond(sck, Message::Respond::OK);
            cout << "****** User "<< user.get_nickname() << " registered ******\n";
            return false;
        }
        else
        {
            send_respond(sck, Message::Respond::DENY);
            cout << "****** User "<< user.get_nickname() << " was unable to register ******\n";
        }
    }
    else if ( type ==  Message::Request::SIGNIN )
    {
        if(user.signin(message))
        {
            cout<<"------ User "<<user.get_nickname()<< " is now logged in ------\n";
            send_respond(sck, Message::Respond::OK);
            return false;
        }
        else
        {
            cout<<"------ User was unable to log in ------\n";
            send_respond(sck, Message::Respond::DENY);
        }
    }
    else if( type == Message::Request::COMMAND )
    {
        vector<string> list = Message::ParseMessage(message.get_data());
        respond_to_command(sck,list);
    }
    return true;
}

void send_respond(int sck, int respond)
{
    ostringstream ss;
    ss << respond;
    write(sck, ss.str().c_str(), ss.str().length());
}

int respond_to_command(int sck, vector<string> message)
{
    User user;
    ostringstream ss;
    string command = message[0];
    if (command[0] == '\\')
    {
        command.erase(0,1);
        int command_type = Message::RecognizeType(command);
        if (command_type == Message::Command::CONNECT)
        {
            
        }
        else if(command_type == Message::Command::HELP)
        {
            cout << "mmmmmm Sending help message mmmmmm\n";
            string text = Message::GetHelpMessage();
            ss << text;
            write(sck, ss.str().c_str(), ss.str().length());
        }
        else if(command_type == Message::Command::EXIT)
        {
            
        }
        else if(command_type == Message::Command::CHANNEL)
        {
            if (message.size() != 2 ) // also check if channels exists
                write(sck,"Somme error message",2); // to do
            else
            {

            }
        }
    }
    
}

void create_channels()
{
    string file_name = "data/channels/list/channels.txt";
    string line;
    ifstream file(file_name);
    for(string line; getline( file, line ); )
    {
        string file_path = "data/channels/"+line+".txt";
        remove(file_path.c_str());
        ofstream channel_file (file_path);
        channel_file.close();
    }
    file.close();
}
