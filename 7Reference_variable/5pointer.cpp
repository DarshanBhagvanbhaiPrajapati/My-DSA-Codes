#include<iostream>
using namespace std;

void solve(int* p){ // pointer using pass by reference 

    p = p + 1; // increment the value by 1
}
int main(){
    int a = 12;
    int *p = &a;
    
    cout << "before " << p << endl;
    solve(p);

    cout << "after function: " << p << endl;

    cout << a << endl; //we get the answer as 13 
    
    return 0;
}

//as no change in the a because it is pass by value
//so for pass by refernece we have to do (int * &p)
