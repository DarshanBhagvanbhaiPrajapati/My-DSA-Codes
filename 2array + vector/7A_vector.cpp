#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>arr;

    int ans=(sizeof(arr)/sizeof(char));
    cout << ans <<endl; 
    cout << arr.size() <<endl;
    cout << arr.capacity() << endl;


    return 0;
}