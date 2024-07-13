#include<iostream>
using namespace std;

int main(){

    char full_name[100];
    // cin >> full_name;
    // cout << full_name <<endl;
    cin.getline(full_name,50); // we use this function for printing with space
    cout << full_name;
    return 0;
}