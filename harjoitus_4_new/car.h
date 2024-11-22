#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <iostream>
using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel objWheel;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;


public:
    Car():objWheel(),objWheel2(),objWheel3(),objWheel4(),model(""),brand(""){}
    Car(string mod,string bra):model(mod),brand(bra){}

    Engine getObjEngine() const;
    void setObjEngine(const Engine &newObjEngine);
    Wheel getObjWheel() const;
    void setObjWheel(const Wheel &newObjWheel);
    Wheel getObjWheel2() const;
    void setObjWheel2(const Wheel &newObjWheel2);
    Wheel getObjWheel3() const;
    void setObjWheel3(const Wheel &newObjWheel3);
    Wheel getObjWheel4() const;
    void setObjWheel4(const Wheel &newObjWheel4);
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);

    void setEngine(){
        objEngine.setHorsepower(150);
        objEngine.setDisplacement(2.0);
        }

    void setWheels(){
        objWheel.setSize(17);
        objWheel.setType("Kesarengas");

        objWheel2.setSize(17);
        objWheel2.setType("Kesarengas");

        objWheel3.setSize(17);
        objWheel3.setType("Kesarengas");

        objWheel4.setSize(17);
        objWheel4.setType("Kesarengas");
    }

    void printDetails(){
        cout <<"Auto: "<<brand<<model<<endl;
        cout <<"Moottori: "<<objEngine.getHorsepower()<<" HP"<<", "<<objEngine.getDisplacement()<<"L"<<endl;
        cout <<"Rengas 1: "<<objWheel.getSize()<<" tuumaa, "<<objWheel.getType()<<endl;
        cout <<"Rengas 2: "<<objWheel.getSize()<<" tuumaa, "<<objWheel.getType()<<endl;
        cout <<"Rengas 3: "<<objWheel.getSize()<<" tuumaa, "<<objWheel.getType()<<endl;
        cout <<"Rengas 4: "<<objWheel.getSize()<<" tuumaa, "<<objWheel.getType()<<endl;
    }

};

#endif // CAR_H
