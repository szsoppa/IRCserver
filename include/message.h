#include "server.h"

using namespace std;

class Message
{
public:
    Message();
    Message(int type, const char *data);
    ~Message();
    void set_type(const int type);
    void set_data(const string data);
    void append_data(const char *data);
    int get_type();
    const string get_data();
private:
    int type;
    string data;
};
