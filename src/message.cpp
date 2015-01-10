#include "message.h"

Message::Message()
{
}

Message::~Message()
{
}

Message::Message(int type, const char *data)
{
    this->type = type;
    this->data = data;
}

void Message::set_type(int type)
{
    this->type = type;
}

void Message::set_data(const string data)
{
    this->data.append(data);
}

void Message::append_data(const char *data)
{
    this->data.push_back( *data );
}

int Message::get_type()
{
    return this->type;
}

const string Message::get_data()
{
    return this->data;
}
