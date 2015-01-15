#ifndef MESSAGE_H
#define MESSAGE_H

#include "server.h"

using namespace std;

namespace Message
{
namespace Request
{
    extern int SIGNUP;
    extern int SIGNIN;
    extern int COMMAND;
}

namespace Respond
{
    extern const int DENY;
    extern const int OK;
    extern const int NICK_TAKEN;
    extern const int WRONG_SIGN_IN_DATA;
    extern const int WRONG_SIGN_UP_DATA;
}

// commands
namespace Command
{
    extern const int CONNECT;
    extern const int HELP;
    extern const int EXIT;
}

namespace Data
{
    extern int WRONG_DATA;
}
    int RecognizeType(string message);
    vector<string> ParseMessage(string message);
    vector<string> Split(string text);
    string GetHelpMessage();
}

#endif // MESSAGE_H
