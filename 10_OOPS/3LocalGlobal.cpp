#include<iostream>
using namespace std;

int x=20;//global variable
int main(){
    int x=30;
    cout << x <<endl;//will print 30 beacause local > global inside
    //but to accces global we use ::
    cout << ::x << endl;
    {
        int x=50;
        
        cout << x <<endl;
    }


    return 0;
}