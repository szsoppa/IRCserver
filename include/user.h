#ifndef USER_H
#define USER_H

#include "data.h"

class User
{
public:
    User();
    ~User();

    bool validate(Data message);
    bool signup();
    bool signin(Data message);
    bool check_unique_nickname();
    bool check_if_user_exist();
    void add_nickname_to_list();
    void remove_nickname();
    
    // getters
    void set_nickname(string nickname);
    string get_nickname();

private:
    string nickname;
    string login;
    string password;
};

#endif
