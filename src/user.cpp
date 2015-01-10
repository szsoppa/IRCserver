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
    ofstream file;
    file.open ("data/users/users.txt", fstream::app);
    file << hashing(this->nickname) << ',' << hashing(this->password) << '\n';
    file.close();
    return true;
}

bool User::login(Message message)
{
    hash<string> hashing;
    vector<string> data = message.split();
    ifstream file("data/users/users.txt");
    for(string line; getline( file, line ); )
    {   
        message.clear();
        message.set_data(line);
        vector<string> temp = message.split();
        stringstream ss;
        ss << hashing(temp[0]);
        string temp1 = ss.str();
        ss.str("");
        ss << hashing(temp[1]);
        string temp2 = ss.str();
     
        if (temp1.compare(data[0]) && temp2.compare(data[1]))
            return true;
    }
    file.close();
    return false;
}