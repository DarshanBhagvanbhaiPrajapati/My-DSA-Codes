#include<bits/stdc++.h>
using namespace std;

int main(){
    //also u can use only one loop for reversing an arrray
    int arr[] = {1,4,6,5,10,11};
    int n = sizeof(arr)/sizeof(int);

    int left = 0;
    int right = n-1;

    while(left <= right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
        
    return 0;
}
