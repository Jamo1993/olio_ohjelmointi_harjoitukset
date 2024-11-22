#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>
using namespace std;

class Wheel
{
private:
    int size;
    string type;

public:
    Wheel():size(0),type(""){}
    Wheel(int sz,const string& tp):size(sz),type(tp){}


    int getSize() const;
    void setSize(int newSize);
    string getType() const;
    void setType(const string &newType);
};

#endif // WHEEL_H
