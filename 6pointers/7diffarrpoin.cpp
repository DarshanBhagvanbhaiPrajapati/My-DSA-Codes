#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout << sizeof(arr) <<endl;//40 byte 
    int *ptr = arr;
    cout << sizeof(ptr) <<endl;//always 8 byte as studied
    
    return 0;
}