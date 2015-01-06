#include "functions.h"

/* global variables */
const char *protocol = "tcp";
char bufor[BUFSIZE];
ushort service_port = 4000;
pthread_mutex_t sock_mutex = PTHREAD_MUTEX_INITIALIZER;

void print_error( const char *message )
{
    perror(message);
    exit(EXIT_FAILURE);
}

void* read_action( void* arg)
{
    int rcv_sck = *( (int *) arg);
    int received;
    while ( true )
    {
        while( (received = read (rcv_sck, bufor, BUFSIZE)) > 0)
        {
            if (bufor[0] == '.' && received==2)
            {
                close (rcv_sck);
                break;
            }
            write (rcv_sck, bufor, received);
        }
    }
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

        if (pthread_create (&client_thread, NULL, read_action, &rcv_sck) != 0)
            print_error("Thread create error");

    }

    close (sck);
    printf ("Server terminated.");
    exit(EXIT_SUCCESS);
}
