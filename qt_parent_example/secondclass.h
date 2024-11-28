#ifndef SECONDCLASS_H
#define SECONDCLASS_H

#include <QObject>

class SecondClass : public QObject
{
    Q_OBJECT
public:
    explicit SecondClass(QObject *parent = nullptr);

signals:
};

#endif // SECONDCLASS_H
