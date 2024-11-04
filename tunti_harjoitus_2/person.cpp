#include "person.h"

int Person::getAge() const
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &newName)
{
    name = newName;
}

void Person::personInfo()
{
    cout<<"-------------"<<endl;
    cout<<"henkilon nimi= "<<name<<endl;
    cout<<"henkilon ika= "<<age<<endl;
    cout<<"-------------"<<endl;
}

Person::Person()
{
    cout<<"Person olio luotiin"<<endl;
}

