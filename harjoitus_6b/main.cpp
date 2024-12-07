#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass objExample;
    objExample.startToWait();

    return a.exec();
}
