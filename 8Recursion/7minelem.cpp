//min and max are predefined function
#include<iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[],int n,int i,int& mini){ //we have done pass by reference
    //base case
    if(i>=n){
        //agar array khatam ho gaya to vapas aajao
        return;
    }
    // 1 case solve kardo
    mini = min(mini,arr[i]);
    //baki recursion sambhal lega
    findMin(arr,n,i+1,mini);
}
int main(){
      int arr[] = {10,44,32,56,64,6,67,90,12};
      int n =8;
      int maxi = INT_MIN;
      int mini = INT_MAX;
      int i =0;
    //findMax(arr,n,i,maxi);
      findMin(arr,n,i,mini);
      cout << "maximum number is maxi" << maxi << endl;
      cout << "min number is:  "<< mini <<endl;

    return 0;
} 