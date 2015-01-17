#include "channel.h"

Channel::Channel()
{
    
}

Channel::Channel(const Channel& orig)
{
    
}

Channel::~Channel()
{
    
}

bool Channel::exists(const string &name)
{
    ifstream file("data/channels/list/channels.txt");
    for(string line; getline( file, line ); )
    {   
        if (line.compare(name) == 0)
        {
            file.close();
            return true;
        }
    }
    file.close();
    return false; 
}

vector<string> Channel::user_list(const string &name)
{
    Data parser;
    vector<string> data;
    string path = "data/channels/" + name + ".txt";
    vector<string> users;
    ifstream file(path);
    for(string line; getline( file, line ); )
    {
        parser.set_data(line);
        data = parser.split();
        users.push_back(data[0]);
    }
    file.close();
    return users; 
}

vector<int> Channel::descriptor_list(const string &name)
{
    Data parser;
    vector<string> data;
    string path = "data/channels/" + name + ".txt";
    vector<string> descriptors;
    ifstream file(path);
    for(string line; getline( file, line ); )
    {
        parser.set_data(line);
        data = parser.split();
        descriptors.push_back(data[1]);
    }
    file.close();
    return descriptors; 
}

bool Channel::user_in(const string &name, const string &user)
{
    Data parser;
    vector<string> data;
    string path = "data/channels/" + name + ".txt";
    ifstream file(path);
    for(string line; getline( file, line ); )
    {   
        parser.set_data(line);
        data = parser.split();
        if (user.compare(data[0]) == 0)
        {
            file.close();
            return true;
        }
    }
    file.close();
    return false; 
}

bool Channel::add_user(const string &name, const string &user, int descriptor)
{
    if ( !user_in(name, user) )
    {
        string path = "data/channels/" + name + ".txt";
        ofstream file;
        file.open(path, fstream::app);
        file << name << ',' << descriptor << ',' << '\n';
        file.close();
        return true;
    }
    return false;
}

bool Channel::delete_user(const string &name, const string &user)
{
    if( user_in(name,user) )
    {
        Data parser;
        vector<string> data;
        string text;
        string path = "data/channels/" + name + ".txt";
        ifstream file(path);
        for(string line; getline( file, line ); )
        {   
            parser.set_data(line);
            data = parser.split();
            if (user.compare(data[0]) != 0)
            {
                line = line + '\n';
                text.append(line);
            }
        }
        file.close();
        
        ofstream file2;
        file2.open(path, fstream::app);
        file2 << text;
        file2.close();
        
        return true;
    }
    return false;
}
