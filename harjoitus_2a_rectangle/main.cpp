#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle objRectangle;
    objRectangle.setWidth(5);
    objRectangle.setHeight(5);
    objRectangle.getArea();
    objRectangle.getCircum();
    objRectangle.printData();

    return 0;
}
