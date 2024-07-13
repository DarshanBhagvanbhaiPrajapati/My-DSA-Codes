#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n ==1)
        return 1; // 1 pe ruk jana he
        
    // //recursive relation
    // int chotiproblem = factorial(n-1);
    // int badiproblem = n * chotiproblem;

    // return badiproblem;
    //or
    int ans = n * factorial(n-1);
    return ans;
}
int main(){
    int n;
    cout << "entre the value of n" << endl;
    cin >> n ;

    int ans = factorial(n);
    cout << "answer is : " << ans << endl;
    return 0;
}