#include<iostream>
using namespace std;
int main(){
    char ch[10]= "darshanp";
    char *c =ch;

    cout <<ch<<endl;
    cout << &ch <<endl;
    cout << ch[0] <<endl;

    cout << *c << endl;
    cout << &c <<endl; 
    cout << c <<endl;
    
    
    return 0;
}