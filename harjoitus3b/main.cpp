#include <iostream>
#include "dog.h"
#include "animal.h"
using namespace std;

int main()
{
    Animal*animal=new Animal();
    animal->callOut();

    Animal*dog=new Dog();
    dog->callOut();

    delete animal;
    animal=nullptr;

    delete dog;
    dog=nullptr;
    return 0;
}
