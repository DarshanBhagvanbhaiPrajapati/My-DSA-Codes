#include<iostream>
using namespace std;
int main(){
    int a= 10;
    int *p = &a;
    int *q =p;
    int *r = q;

    cout << a << endl;//10
    cout << &a << endl;//adddresh of a
    cout << p << endl;//addresh of a
    cout << &p << endl;//add of p
    cout << *p << endl;//10
    cout << q << endl;//addresh of a
    cout << &q << endl;//add of q
    cout << *q << endl;//10
    cout << r << endl;//add of a
    cout << &r << endl;//add of r
    cout << *r << endl;//10
    cout << (*p+ *q + *r) << endl;//30
    cout << (*p)*2 + (*r)*3 << endl;//50
    cout << (*p/2) - (*q)/2 << endl;//0
    return 0;
}