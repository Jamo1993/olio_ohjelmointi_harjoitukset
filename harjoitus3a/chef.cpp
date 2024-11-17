#include "chef.h"
#include <iostream>

Chef::Chef(const string &newName): name(newName) {
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

Chef::~Chef() {
    cout<<"Chef "<<name<<" destruktori"<<endl;
}
