//counting frequency of string using map
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="tiruvananthapuram";
    unordered_map<char,int>freq;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        freq[ch]++;
    }
    for(auto i:freq){
        cout << i.first << " " << i.second<<endl;
    }
    return 0;
}