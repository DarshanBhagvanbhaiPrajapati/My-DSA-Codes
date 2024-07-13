#include<iostream>
using namespace std;

void printcounting(int n){
    //base case
    if(n==0){
        return ; // alwayes we have to use return keyword
    }
    //processsing
    cout << n << " "<<endl;  

    //recursive relation
    printcounting(n-1);  //if processing part will belove recursive ralat
    //it will print counting from 1 to n;
}
int main(){
    int n;
    cout << "entre the value of n" << endl;
    cin >> n ;

    printcounting(n);
     
    return 0;
}