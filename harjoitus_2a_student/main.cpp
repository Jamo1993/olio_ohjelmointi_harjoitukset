#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<Student>objStudent=make_unique<Student>();
    objStudent->setName("Kalle Kallio");
    objStudent->setStudentNumber(50);
    objStudent->setAverage(4.6);

    cout<<"Nimi: " << objStudent->getName()<< endl;
    cout<<"Opiskelijanumero : "<<objStudent->getStudentNumber() <<endl;
    cout<<"Keskiarvo: "<<objStudent->getAverage() <<endl;

    return 0;
}
