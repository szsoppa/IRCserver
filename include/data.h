#ifndef DATA_H
#define DATA_H

#include "server.h"

class Data
{
    
public:
    Data();
    Data(int type, const char *data);
    ~Data();

    // setters and getters
    void set_type(const int type);
    void set_data(const string data);
    void append_data(const char *data);
    int get_type();
    const string get_data();

    // class functionality
    void clear();
    vector<string> split();
private:
    int type;
    string data;
};

#endif
