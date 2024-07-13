#include<iostream>
using namespace std;

void solve(int* var){ // pointer using pass by reference 

    *var = *var + 1; // increment the value by 1
}
int main(){
    int a = 12;
    solve(&a);

    cout << a << endl;
    return 0;
}