#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle *objRectangle;
    objRectangle=new Rectangle;
    objRectangle->setWidth(5);
    objRectangle->setHeight(5);
    objRectangle->getArea();
    objRectangle->getCircum();
    objRectangle->printData();
    delete objRectangle;
    objRectangle=nullptr;


    return 0;
}
