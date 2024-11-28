#ifndef CLASSB_H
#define CLASSB_H
#include <iostream>
using namespace std;


class ClassB
{
private:
    string Info;


public:
    ClassB();
    string getInfo() const;
    void setInfo(const string &newInfo);
};

#endif // CLASSB_H
