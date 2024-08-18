//finding maximum value in a array 
//for int_min and int_max we need to define LIBRARY limit.h in header file

#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
    int size = 11; //or int n = sizeof(arr)/sizeof(int);
    //initialize the maxi variable with the minimum possible integer value
    int maxi = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            //found a number tha maxi,update maxi
            maxi=arr[i];
        }
    }
    cout << "maximum number is  " <<maxi <<endl;

    return 0;
}