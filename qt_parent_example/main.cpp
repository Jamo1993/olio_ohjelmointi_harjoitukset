#include "firstclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FirstClass *objFirst=new FirstClass;

    return a.exec();
}
