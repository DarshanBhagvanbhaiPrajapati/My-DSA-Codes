#include<iostream>
using namespace std;

void solve(int vari){ // pass by value so change will not reflect

    vari++;
}
int main(){
    int a = 5;
    solve(a);

    cout << a << endl;
    return 0;
}