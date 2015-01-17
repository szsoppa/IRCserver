#include "message.h"

namespace Message
{
namespace Request
{
    int SIGNUP = 0;
    int SIGNIN = 1;
    int COMMAND = 2;
}

namespace Respond
{
    const int OK = 0;
    const int DENY = 1;
    const int NICK_TAKEN = 2;
    const int WRONG_SIGN_IN_DATA = 3;
    const int WRONG_SIGN_UP_DATA = 4;
}

namespace ChannelRespond
{
    const int ACCEPT = 0;
    const int  DENY = 1;
    const int HELP = 2;
    const int EXIT = 3;
    const int LIST = 4;
    const int MESSAGE = 5;
}

namespace Data
{
    int WRONG_DATA = -1;
}

// commands
namespace Command
{
    const int CONNECT = 0;
    const int HELP = 1;
    const int EXIT = 2;
    const int CHANNEL = 3;
}

// methods
int RecognizeType(string message)
{
    if (message.compare("connect") == 0)
        return 0;
    else if (message.compare("help") == 0)
        return 1;
    else if (message.compare("exit") == 0)
        return 2;
    else if (message.compare("channel") == 0)
        return 3;
    else return Data::WRONG_DATA;
}

vector<string> ParseMessage(string message)
{
    vector<string> list;
    if (message[0] == '\\')
    {
        list = Split(message);
        return list;
    }
    list.push_back(message);
    return list;
}

vector<string> Split(string text)
{
    vector<string> list;
    string temp;
    temp.clear();
    for (string::iterator it = text.begin(); it != text.end(); it++ )
    {
        if (*it == ' ' && temp.length()!=0 )
        {
            list.push_back(temp);
            temp.clear();
            continue;
        }
        else if ( *it == ' ' && temp.length() == 0)
        {
            continue;
        }
        else if ( *it == ',' && temp.length() == 0)
        {
            break;
        }
        else if ( *it == ',' && temp.length() != 0)
        {
            list.push_back(temp);
            break;
        }
        temp.push_back(*it); 
        cout << temp << endl;
    }
    return list;
}

string GetHelpMessage()
{
    ofstream f;
    f.open ("data/nicknames/nicknames.txt", fstream::app);
    f.close();
    string text;
    ifstream file("data/help/help.txt");
    for(string line; getline( file, line ); )
    {
        text.append(line);
        text.push_back('\n');
    }
    file.close();
    return text;
}

}
