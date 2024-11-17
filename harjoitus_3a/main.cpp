#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>
using namespace std;

int main() {
    // Testing Chef class
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << "\n";

    // Testing ItalianChef class
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    return 0;
}
