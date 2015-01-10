#include "server.h"
#include "message.h"

class User
{
public:
    User();
    ~User();

    bool validate(Message message);
    bool register(Message message);
    bool login(Message message);
};
