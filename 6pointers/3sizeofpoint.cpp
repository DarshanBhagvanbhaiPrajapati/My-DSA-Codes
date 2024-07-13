#include<iostream>
using namespace std;
int main(){
    int a =5;
    int *ptr = &a;
    cout << sizeof(ptr) << endl;

    char b='c';
    char *c = &b;
    cout << sizeof(c) << endl;

    double dtr = 5.03;
    double *d = &dtr;
    cout << sizeof(d) << endl;

    return 0;
}