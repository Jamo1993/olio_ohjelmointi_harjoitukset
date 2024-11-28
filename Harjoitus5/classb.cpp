#include "classb.h"

string ClassB::getInfo() const
{
    return Info;
}

void ClassB::setInfo(const string &newInfo)
{
    Info = newInfo;
}

ClassB::ClassB() {}
