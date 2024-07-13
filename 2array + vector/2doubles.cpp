#include<iostream>
using namespace std;

int main(){

    int arr[500];
    int n;
    cout << "how many numbers you want to entre" << endl;
    cin >> n;
    cout << "entre the number" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //printing doubles//
    cout<<"doubles:  ";
    for(int i=0;i<n;i++){
        cout << 2*arr[i] << " ";
    }
    return 0;
}
