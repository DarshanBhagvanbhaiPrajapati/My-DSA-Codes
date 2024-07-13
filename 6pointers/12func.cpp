#include<iostream>
using namespace std;

void solve(int *p){
    cout << "addresh stored in p is: " << p<<endl;
    cout << "addresh of p is: " << &p<<endl;
    *p = *p+10;

}
int main(){
    int a=5;
    cout << "addresh of a is: " <<&a <<endl;

    int *ptr =&a;
    cout << "addresh stored in ptr is: " <<ptr <<endl;
    cout << "addresh of ptr is: " <<&ptr << endl;

    cout << "value of a is: "<< a << endl;

    solve(ptr);

    cout << "after updation : "<< a << endl;
    return 0;
}