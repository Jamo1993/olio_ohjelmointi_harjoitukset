#include "ItalianChef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(const string &name):Chef(name) {
    cout<< "ItalianChef " <<name<<" konstruktori\n";
}

string ItalianChef::getName() const {
    cout<<"name of the Italian Chef is "<<name<<endl;
    return name;
}

void ItalianChef::makePasta() {
    cout<< "ItalianChef "<<name<<" makes pasta\n";
}

ItalianChef::~ItalianChef() {
    cout<<"ItalianChef "<<name<<" destruktori\n";
}
