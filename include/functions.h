#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "user.h"
#include "message.h"
#include "server.h"

/* Main server loop checks new clients and creates thread for connection */
void *main_loop(void *arg);
/* Action which takes place when server is listening for new clients */
void *find_action(void* arg);
/* Prints error when occured */
void print_error( const char *message );
/* Recognizes message and performe response */
void recognize_message(Message message, int sck);

#endif
