#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass RMS;
    RMS.raiseMySignal();

    return a.exec();
}
