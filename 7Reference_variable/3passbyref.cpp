#include<iostream>
using namespace std;

void solve(int &vari){ // pass by reference it  will reflect

    vari++;
}
int main(){
    int a = 5;
    solve(a);

    cout << a << endl;
    return 0;
}