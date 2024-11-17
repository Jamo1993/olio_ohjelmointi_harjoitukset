#include "chef.h"
#include "italianchef.h"
#include <iostream>
using namespace std;

int main()
{
    Chef Chef("Gordon Ramsay");
    Chef.makeSalad();
    Chef.makeSoup();


    ItalianChef italianchef("Anthony Bourdain");
    italianchef.makeSalad();
    italianchef.makeSoup();
    italianchef.makePasta();
    italianchef.getName();
    return 0;
}
