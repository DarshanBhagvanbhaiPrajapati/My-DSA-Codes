#include<iostream>
using namespace std;
int main(){
    int arr[4] = {12,14,16,18};
    // cout << arr << endl;
    // cout << arr[0] <<endl;
    // cout << &arr <<endl;
    // cout << &arr[0] <<endl;//here all will give same output

    // //but pointer
    // int *ptr =arr;
    // cout << ptr <<endl;
    // cout << &ptr << endl;//here ptr and &ptr will give different output remember
    
    cout << *arr <<endl;
    cout << *arr +1 <<endl;
    cout << *(arr) +1 <<endl;
    cout << *(arr +1 ) <<endl;// arr means add+1 means other addresh and at that value
    cout << *(arr +2 ) <<endl;
    return 0;
}