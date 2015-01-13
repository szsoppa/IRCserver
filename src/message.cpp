#include "message.h"

namespace Message
{
namespace Request
{
    int SIGNUP = 0;
    int SIGNIN = 1;
    int JOIN_CHANNEL = 2;
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

}
