#include<iostream>
using namespace std;

int main(){

    // char name[100];
    // cout << "entre your name: " << endl;
    // cin >> name;
    // cout << "apka name  " << name <<"hai " << endl;
    
    // char ch[100];
    // ch[0] = 'a';
    // ch[1] = 'b';
    // ch[2] = 'c';

    // cout << ch[0] << ch[1] << ch[2]<<endl;

    //null character
    char name[100];
    cin >> name;
    for(char i=0;i<7;i++){
        cout << "index " << i << " value " << name[i] <<endl;
    }
    int value = (int)name[6];
    cout << "value is : " << value <<endl; // as output is value is 0 because ascii value of null char is 0;
    
    return 0;
}