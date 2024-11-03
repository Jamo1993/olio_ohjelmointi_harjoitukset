#include <iostream>
using namespace std;

void calcSum(int a,int b)
{
    cout <<"Summa: "<<(a+b) << endl;
}

void calcDiv(int a, int b)
{
    if(b==0){
        cout<<"Jakaja ei voi olla 0"<<endl;
        }
    else{
        cout<<"Osamaara: "<<(a/b)<<endl;
            }
}

int retSum(int a,int b)
{
    return a + b;
}

float retDiv(int a, int b) {
    if (b != 0) {
        return float(a) / b;
    } else {
        cout << "Jakaja ei voi olla 0" << endl;
        return 0.0;
    }
}
