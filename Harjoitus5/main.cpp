#include "aggregationa.h"
#include "assosiationa.h"
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

//Ei pystynyt muuttamaan, viittaa edelleen alkuperäiseen A muuttujan osoitteeseen..
<<<<<<< HEAD

    ClassB objB;
    objB.setInfo("Olion B asettama info");
=======
>>>>>>> 269e99e6f9055246ca9bdad37110c6f803780bee

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"\nAssosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"\nAggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
