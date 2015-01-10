#include "server.h"

using namespace std;

class Message
{
public:
    Message();
    Message(int type, const char *data);
    ~Message();

    // setters and getters
    void set_type(const int type);
    void set_data(const string data);
    void append_data(const char *data);
    int get_type();
    const string get_data();

    // class functionality
    vector<string> split();
private:
    int type;
    string data;
};
