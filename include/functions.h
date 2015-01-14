#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "user.h"
#include "data.h"
#include "server.h"

/* Main server loop checks new clients and creates thread for connection */
void *main_loop(void *arg);
/* Action which takes place when server is listening for new clients */
void *find_action(void* arg);
/* Prints error when occured */
void print_error( const char *message );
/* Recognizes message and perform response */
bool recognize_message(Data message, int sck);
/* Sends respond for user request*/
void send_respond(int sck, int respond);
#endif
