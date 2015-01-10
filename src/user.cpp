#include "user.h"

User::User()
{
}

User::~User()
{
}

bool User::validate(Message message)
{
    vector<string> data = message.split();

    if (data[1].compare(data[2]) )
    {
        this->nickname = data[0];
        this->password = data[1];
        return true;
    }
    return false;
}

bool User::registration(void)
{
    hash<string> hashing;
    cout << "hello";
    ofstream file;
    file.open ("data/users/users.txt", fstream::app);
    file << hashing(this->nickname) << ',' << hashing(this->password) << '\n';
    file.close();
    return true;
}

bool User::login(Message message)
{
    return false;
}