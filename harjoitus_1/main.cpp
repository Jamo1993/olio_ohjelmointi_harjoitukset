#include <iostream>
#include "myFunctions.h"

using namespace std;

int main()
{
    int a,b;

    cout<<"Anna kokonaisluku A: ";
            cin >> a;
    cout<<"Anna kokonaisluku B: ";
            cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

int summa = retSum(a,b);
cout << "Summa: " << summa << endl;

float osamaara = retDiv(a, b);
cout << "Osamaara: " << osamaara << endl;

return 0;
}
