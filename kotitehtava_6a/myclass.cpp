#include "myclass.h"
#include "qdebug.h"
#include "qtmetamacros.h"

MyClass::MyClass(QObject *parent) : QObject(parent) {
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
}

void MyClass::raiseMySignal()
{
    emit mySignal();
}

void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin";
}
