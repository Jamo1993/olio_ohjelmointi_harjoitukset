#include "exampleclass.h"

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
     qDebug()<<"Terve";
}

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"Start";
    connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
        qDebug()<<"End";
}
