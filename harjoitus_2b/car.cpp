#include "Car.h"

Car::Car(string brand, string model, int yearModel) : brand(brand), model(model), yearModel(yearModel) {}

void Car::printData() const {
    cout << "Merkki: " << brand << " Malli:" << model << " Vuosi:" << yearModel << endl;
}
