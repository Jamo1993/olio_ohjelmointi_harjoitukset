#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::setWidth(double Width) {
    width = Width;
}

void Rectangle::setHeight(double Height) {
    height = Height;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2 * (width + height);
}

void Rectangle::printData() const {
    cout << "Rectangle width: " << width << endl;
    cout << "Rectangle height: " << height << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Circumference: " << getCircum() << endl;
}

Rectangle::Rectangle() {
    cout << "Olio luotiin" << endl;
}

Rectangle::~Rectangle() {
    cout << "Olio tuhottiin" << endl;
}
