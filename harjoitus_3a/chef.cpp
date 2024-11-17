#include "Chef.h"
#include <iostream>
#include <iostream>
using namespace std;

// Constructor
Chef::Chef(const std::string& name) : name(name) {
    cout << "Chef " << name << " constructor\n";
}

// Destructor
Chef::~Chef() {
    cout << "Chef " << name << " destructor\n";
}

// Member function definitions
void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad\n";
}

void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup\n";
}
