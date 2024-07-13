#include<bits/stdc++.h>
using namespace std;
int main(){
    //reversing string using stack
    string str = "DARSHAN";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
       cout <<  s.top() << " "<<endl;
        s.pop();
    }
    cout << endl;
    return 0;
}