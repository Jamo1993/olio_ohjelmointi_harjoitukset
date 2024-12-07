#include "firstclass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"FirstClass olio luotiin\n";
    //luodaan SecondClass luokan olio objSecondClass
    //asetetaan nykyinen olio objSecondClass olion parentiksi
    //objSecondClass tuhoutuu, kun nukuinen olio tuhoutuu
    objSecondClass = new SecondClass(this);
}

FirstClass::~FirstClass()
{
 qDebug()<<"FirstClass olio tuhottiin\n";
}
