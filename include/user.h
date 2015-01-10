#ifndef USER_H
#define USER_H

#include "message.h"

class User
{
public:
    User();
    ~User();

    bool validate(Message message);
    bool registration();
    bool login(Message message);

private:
    string nickname;
    string password;
};

#endif
