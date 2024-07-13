#include<iostream>
using namespace std;

void printDigits(int n){
    //base case
    if(n==0){
        return ;
    }
    int newValueofN = n/10;

    //baki recursion sambhal lega
    printDigits(newValueofN);

    //1 case me solve karunga (print 1 digit)
    int digit =n%10;
    cout << digit << " ";
}

int main(){
    int n =647; //hw for int n=0647;
    printDigits(n);
    return 0;
}
//for 0647 try and find result and think on that.
//also this is article is written in dsa notebook 2