#ifndef SERVER_H
#define SERVER_H

/* headers */
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>

#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <mutex>
#include "message.h"

/* defines */
#define QUEUE_LENGTH 15
#define BUFSIZE 10000

/* namespaces */
using namespace std;

#endif
