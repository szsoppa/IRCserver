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
    if (data[1].compare(data[2]) == 0)
    {
        this->login = data[0];
        this->password = data[1];
        return true;
    }
    return false;
}

bool User::signup(void)
{
    cout << "****** User "<< this->login << " tries to register ******\n";
    hash<string> hashing;
    ofstream file;
    file.open ("data/users/users.txt", fstream::app);
    file << hashing(this->login) << ',' << hashing(this->password) << ',' << '\n';
    file.close();
    return true;
}

bool User::signin(Message message)
{
    hash<string> hashing;
    vector<string> data = message.split();
    cout << "****** User "<< data[0] << " tries to log in ******\n";
    ifstream file("data/users/users.txt");
    this->nickname = data[2];
    for(string line; getline( file, line ); )
    {   
        message.clear();
        message.set_data(line);
        vector<string> temp = message.split();
        stringstream ss;
        ss << hashing(data[0]);
        string temp1 = ss.str();
        ss.str("");
        ss << hashing(data[1]);
        string temp2 = ss.str();

        if ((temp1.compare(temp[0]) == 0) && (temp2.compare(temp[1]) == 0))
        {
            if (!check_unique_nickname())
            {
                // nickname not unique
                return false;
            }
            else 
            {
                add_nickname_to_list();
            }
            return true;
        }
    }
    file.close();
    return false;
}

bool User::check_unique_nickname()
{
    ofstream f;
    f.open ("data/nicknames/nicknames.txt", fstream::app);
    f.close();
    ifstream file("data/nicknames/nicknames.txt");
    for(string line; getline( file, line ); )
    {
        size_t pos = line.find(',');      
        line = line.substr(0,pos);
        if (this->nickname.compare(line) == 0)
        {
            file.close();
            return false;
        }
    }
    file.close();
    return true;
}

void User::add_nickname_to_list()
{
    cout << "++++++ Adding new nickname ++++++\n";
    ofstream file;
    file.open("data/nicknames/nicknames.txt", fstream::app);
    file << this->nickname << ',' << '\n';
    file.close();
}

string User::get_nickname()
{
    return this->nickname;
}