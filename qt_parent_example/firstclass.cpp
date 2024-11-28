#include "firstclass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{
    qDebug()>>"FirstClass olio luotiin\n";
}

FirstClass::~FirstClass()
{
 qDebug()>>"FirstClass olio tuhottiin\n";
}
