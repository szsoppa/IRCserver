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

string Channel::user_list(const string &name)
{
    Data parser;
    vector<string> data;
    string path = "data/channels/" + name + ".txt";
    string users;
    ifstream file(path);
    for(string line; getline( file, line ); )
    {
        parser.set_data(line);
        data = parser.split();
        users.append(data[0]);
        users.push_back(',');
    }
    users.push_back('\n');
    file.close();
    return users; 
}

vector<int> Channel::descriptor_list(const string &name)
{
    Data parser;
    vector<string> data;
    string path = "data/channels/" + name + ".txt";
    vector<int> descriptors;
    ifstream file(path);
    for(string line; getline( file, line ); )
    {
        parser.set_data(line);
        data = parser.split();
        descriptors.push_back(atoi(data[1].c_str()));
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
        file << user << ',' << descriptor << ',' << '\n';
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
        
        remove(path.c_str());
        ofstream file2;
        file2.open(path);
        file2 << text;
        file2.close();
        
        return true;
    }
    return false;
}

string Channel::user_in_another_channel(const string& user)
{
    string file_name = "data/channels/list/channels.txt";
    string line("");
    ifstream file(file_name);
    for(string line; getline( file, line ); )
    {
        if(user_in(line, user))
            return line;
    }
    file.close();
    return line;
}