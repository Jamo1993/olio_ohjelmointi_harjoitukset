#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
using namespace std;

#include "Chef.h"

class ItalianChef : public Chef {
public:
    // Constructor
    ItalianChef(const string& name);

    // Destructor
    ~ItalianChef() override;

    // Member functions
    string getName() const;
    void makePasta();
};

#endif
