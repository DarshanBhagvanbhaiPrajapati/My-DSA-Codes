//fibbonacci series = 0,1,1,2,3,5,8,13,21,....... as every second term is sum of previous two

#include<iostream>
using namespace std;

// int fib(int n){
//     //base case
//     if(n==1){
//         //first term
//         return 0;
//     }
//     if(n==2){
//         //second term
//         return 1;
//     }
//     //recorsive relation f(n) = f(n-1) + f(n-2)
//     int ans = fib(n-1) + fib(n-2);
//     return ans;
// }
// int main(){
//     int n; //here n is the term of fibonnaci series
//     cout << "entre the value of n" << endl;
//     cin >> n ;

//     int ans = fib(n);
//     cout <<n << "th term is : " << ans << endl;
//     return 0;
// } 

int fib(int n){
    if(n==0){
        return n;
    }
    if(n==1){
        return n;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans;
}

int  main(){
    int n;
    cin >> n;
    int ans = fib(n);
    cout << "nth term is"<< ans << endl;
    return 0;
}