#include<iostream>
using namespace std;

int fact(int n){
    int factorial =1;//we have started with 1 because at end factorial is 1
    for(int i=2;i<=n;i++){//we have started with 2 till equal to n 
        factorial *= i;
    }
    return factorial;
}
int main(){

    int n;
    cin >> n;
    
    int ans = fact(n);
    cout <<ans << endl;
    return 0;
}