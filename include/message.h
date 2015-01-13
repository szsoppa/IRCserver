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
    extern int JOIN_CHANNEL;
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
    extern string CONNECT;
    extern string HELP;
    extern string EXIT;
}

namespace Data
{
    extern int WRONG_DATA;
}

}

#endif // MESSAGE_H
