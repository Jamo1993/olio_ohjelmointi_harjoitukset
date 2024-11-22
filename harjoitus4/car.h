#ifndef CAR_H
#define CAR_H

#include "wheel.h"
#include "engine.h"
#include <string>
using namespace std;

class Car
{
private:
    string model;
    string brand;
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

public:
    // Constructor declaration
    Car(string model, string brand);

    // Getter and setter methods
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);

    // Method to set engine
    void setEngine(int horsepower, double volume);

    // Method to set wheels
    void setWheels(int size, string type);

    // Method to print car details
    void printDetails() const;
};

#endif // CAR_H
