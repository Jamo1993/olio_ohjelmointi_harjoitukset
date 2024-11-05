#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    void printData() const;
    Car(string brand, string model, int yearModel);

};

#endif // CAR_H
