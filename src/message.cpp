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

namespace Data
{
    int WRONG_DATA = -1;
}

// commands
namespace Command
{
    string CONNECT = "connect";
    string HELP = "help";
    string EXIT = "exit";
}

// methods
int RecognizeType(string message)
{
    if (message.compare(Command::CONNECT) == 0)
        return 0;
    else if (message.compare(Command::HELP) == 0)
        return 1;
    else if (message.compare(Command::EXIT) == 0)
        return 2;
    else return Data::WRONG_DATA;
}

vector<string> ParseMessage(string message)
{
    vector<string> list;
    if (message[0] == '\\')
    {
        cout << "Parsuje command\n";
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
            cout << "wrzucam: " << temp << endl;
            temp.clear();
        }
        else if ( *it == ' ' && temp.length() == 0)
        {
            continue;
        }
        temp.push_back(*it);         
    }
    return list;
}

}
