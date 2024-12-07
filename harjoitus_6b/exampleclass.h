#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H
#include <QThread>
#include <qcoreapplication.h>

#include <QObject>

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    void startToWait();
    void sayHelloSlot();

    explicit ExampleClass(QObject *parent = nullptr);

signals:
    void readyToSay();

};

#endif // EXAMPLECLASS_H
