#include<iostream>
using namespace std; 

// //M1 left to right
void lastOccur(string &s,char x,int i,int& ans){
    //Base case jab index bahar nikal jye
    if(i>=s.length()){
        return;
    }
    //1case solve kardo
    if(s[i]==x){
        ans =i;
    }
    //baki recursion sambhal lega => RECURSIVE CALL
    lastOccur(s,x,i+1,ans);
}

int main(){
    string s;
    cout <<"entre the string: ";
    cin >>s;
    char x;
    cout <<"entre the char you want to find: ";
    cin >>x;
    int i=0;
    int ans=-1;

    lastOccur(s,x,i,ans);
    cout << ans << endl;
    
    return 0;
}