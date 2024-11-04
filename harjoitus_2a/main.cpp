#include <iostream>
#include "Car.h"
#include <memory>

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Skoda");
    objCar.setModel("Fabia");
    objCar.setYearModel(2023);
    objCar.printData();
    return 0;
}
