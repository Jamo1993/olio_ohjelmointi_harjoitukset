#include <iostream>
#include "engine.h"
#include "wheel.h"
#include "car.h"
using namespace std;

int main()
{
    Car myCar("Toyota","Corolla ");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();

    return 0;
}
