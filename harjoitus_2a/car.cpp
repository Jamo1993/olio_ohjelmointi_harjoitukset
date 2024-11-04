#include "Car.h"

string Car::getBrand()const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel()const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()const
{
    cout <<"Brand: "<<brand<<endl;
    cout <<"Model: "<<model<<endl;
    cout <<"Year model: "<<yearModel<<endl;
}

Car::Car()
{
    cout<<"Car olio luotiin"<<endl;
}
Car::~Car()
{
    cout<<"Car olio tuhottiin"<<endl;
}
