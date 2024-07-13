//pointer with functions
#include<iostream>
using namespace std;

void solve(int arr[]){
    cout << "size of pointer: "<<sizeof(arr) <<endl; //8byte
}
int main(){
    int arr[10] = {1,2,3,4};
    cout << "size inside main function: " << sizeof(arr) <<endl;//40byte

    solve(arr);

    return 0;
} //thats why array in function it will pass by reference not by pass by value
