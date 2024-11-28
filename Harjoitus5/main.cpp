#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    int *myPointer =&a;

    cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<<"b:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl;

    cout<<"\nPointterin osoittama osoite on: "<<&myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<a<<endl;

    myPointer = &b;

    cout<<"\nPointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman uuden muistipaikan arvo on: "<<b<<endl;

    int &refA = a;

    cout<<"\nrefA:n osoittama osoite on: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<a<<endl;

    refA = b;

    cout<<"\nrefB:n osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"refB:n osoittaman muistipaikan arvo on: "<<b<<endl;





    return 0;
}
