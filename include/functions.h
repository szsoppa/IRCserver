#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "server.h"

/* Main server loop checks new clients and creates thread for connection */
void* main_loop(void *arg);
/* Action which takes place when server is listening for new clients */
void* read_action(void* arg);
/* Prints error when occured */
void print_error( const char *message );

#endif
