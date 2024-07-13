//print permutation of "abc"
#include<iostream>
using namespace std;

void printPermutation(string &str ,int i){ //we have passed by reference string
    //Base case
    if(i >= str.length()){
        cout << str<< " " <<endl;
        return;
    }
    //now swapping karnithi
    for(int j=i;j<str.length();j++){
        //swap
        swap(str[i],str[j]);
        //baki sambhal lega recursion
        printPermutation(str,i+1);
        //backtracking > why?  > because to recreate the original input sting
        swap(str[i],str[j]);
    }
}
int main(){
    string str = "abc";
    int i =0;
    printPermutation(str,i);
    return 0;
}

