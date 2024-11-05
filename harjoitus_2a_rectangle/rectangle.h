#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;


class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    ~Rectangle();

    void setWidth(double width);

    void setHeight(double height);

    double getArea()const;

    double getCircum()const;

    void printData()const;


};

#endif // RECTANGLE_H
