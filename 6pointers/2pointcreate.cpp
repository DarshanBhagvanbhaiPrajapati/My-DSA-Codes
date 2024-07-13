#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr = &a; //ptr creation
    //we can acces value and addresh with pointer there are two cases
    //1) if we use only ptr it will give only addresh of that pointer
    //2)if we use *ptr it will give value at location stored in ptr
    cout << "addresh of a is " << &a << endl;
    cout << "value stored at ptr is: "<< ptr << endl; // case1)
    cout << *ptr << endl; // case2) it will store value 5
    cout << &ptr << endl;//it give addresh of ptr 
    
}
