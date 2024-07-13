//rectangle pattern

#include<iostream>
using namespace std;
int main(){
    int col,rows;
    cin >> col >> rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}