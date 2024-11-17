#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef {


protected:
    string name;

public:
    // Constructor
    Chef(const string& name);

    // Destructor
    virtual ~Chef();

    // Member functions
    void makeSalad();
    void makeSoup();
};

#endif
