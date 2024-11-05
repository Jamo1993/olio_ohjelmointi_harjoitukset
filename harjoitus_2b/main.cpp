#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int main() {

    vector<Car> carList;
    Car car1("Skoda", "Fabia", 2023);
    Car car2("Volkswagen", "Golf", 2016);
    Car car3("Opel", "Astra", 1996);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    cout << "Toisen alkion tiedot:" <<endl;
    carList[1].printData();

    cout << "\nKaikkien autojen tiedot:\n" <<endl;
    for (int x=0; x<=2;x++) {
        carList[x].printData();
    }

    return 0;
}
