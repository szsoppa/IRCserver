#include "data.h"

Data::Data()
{
}

Data::~Data()
{
}

Data::Data(int type, const char *data)
{
    this->type = type;
    this->data = data;
}

void Data::set_type(int type)
{
    this->type = type;
}

void Data::set_data(const string data)
{
    this->data.append(data);
}

void Data::append_data(const char *data)
{
    this->data.push_back( *data );
}

int Data::get_type()
{
    return this->type;
}

const string Data::get_data()
{
    return this->data;
}

void Data::clear()
{
    this->data.clear();
    this->type = -1;
}

vector<string> Data::split()
{
    string temp;
    vector<string> message;

    for( string::iterator it=this->data.begin(); it!=this->data.end(); ++it)
    {
        cout << *it << endl;
        if(*it == ',')
        {
            message.push_back(temp);
            temp.clear();
            continue;
        }
        else if (*it == '\n')
        {
            cout << "New line found " << endl;
            break;
        }
        temp.push_back(*it);
    }
    cout << "End of split" << endl;
    this->data.clear();
    return message;
}
