/* 
 * File:   Channel.h
 * Author: szymon
 *
 * Created on 15 stycznia 2015, 21:41
 */

#ifndef CHANNEL_H
#define	CHANNEL_H

#include "server.h"
#include "data.h"

using namespace std;

class Channel {
public:
    Channel();
    Channel(const Channel& orig);
    string user_list(const string &name);
    vector<int> descriptor_list(const string &name);
    bool user_in(const string &name, const string &user);
    bool exists(const string &name);
    bool add_user(const string &name, const string &user, int descriptor);
    bool delete_user(const string &name, const string &user);
    string user_in_another_channel(const string &user);
    string find_channel_by_socket(int socket);
    string find_nickname_by_socket(int socket, string file);
    
    virtual ~Channel();
   
private:
};

#endif	/* CHANNEL_H */

