#include<iostream>
using namespace std; 

void Max(int arr[],int n,int i,int& maxi){
    //base case
    if(i>=n){
        return;
    }
    //1 caase solve kardo 
    if(arr[i] > maxi){
        maxi =arr[i];
    }
    Max(arr,n,i+1,maxi);
}

int main(){
    int arr[] = {10,30,15,21,44,26,17};
    int n=7;
    int i=0;
    int maxi= INT_MIN;
    Max(arr,n,i,maxi);
    cout << "max num in array is " <<maxi<<endl;
    
    return 0;
}