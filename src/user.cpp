#include "user.h"

User::User()
{
}

User::~User()
{
}

bool User::validate(Message message);
{
    vector<string> data = message.split();
    if (data[1] == data[2] )
        return true;
    return false;
}

bool User::register(Message message)
{

}

bool User::login(Message message)
{

}
