#include "ItalianChef.h"
#include <iostream>
using namespace std;

// Constructor
ItalianChef::ItalianChef(const std::string& name) : Chef(name) {
    cout << "ItalianChef " << name << " constructor\n";
}

// Destructor
ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destructor\n";
}

// Member function definitions
string ItalianChef::getName() const {
    return name;
}

void ItalianChef::makePasta() {
    cout << "ItalianChef " << name << " makes pasta\n";
}
