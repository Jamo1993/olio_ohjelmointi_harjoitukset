#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <QObject>
#include <QDebug>

class FirstClass : public QObject
{
    Q_OBJECT
public:
    explicit FirstClass(QObject *parent = nullptr);
    ~FirstClass();

signals:
};

#endif // FIRSTCLASS_H
