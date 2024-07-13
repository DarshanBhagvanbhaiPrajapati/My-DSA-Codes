#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr = &a; //we have to give addresh to pointere

    int *dusraptr = ptr;//copy create kar di😇

    cout << *ptr << endl;
    cout << *dusraptr <<endl;//idher bhi 5 hi print ho rahahe
    
    return 0;
}