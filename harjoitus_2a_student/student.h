#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
#include <iostream>


class Student
{
public:

    Student();

    string getName() const;
    void setName(const string &newName);

    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);

    double getAverage() const;
    void setAverage(double newAverage);

private:
    string name;
    int studentNumber;
    double average;

};

#endif // STUDENT_H
