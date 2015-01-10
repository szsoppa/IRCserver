#ifndef USER_H
#define USER_H

#include "message.h"

class User
{
public:
    User();
    ~User();

    bool validate(Message message);
    bool signup();
    bool signin(Message message);
    bool check_unique_nickname();
    void add_nickname_to_list();

private:
    string nickname;
    string login;
    string password;
};

#endif
