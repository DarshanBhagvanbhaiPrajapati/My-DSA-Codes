#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[],int n,int i,int& maxi){//as we have done & because pass by reference
    //base case
    if(i>=n){
        //agar array khatam ho gaya to vapas aajao
        return;
    }
    //1 case solve karna he
    //curret element ko check karo
    if(arr[i] > maxi){
        maxi = arr[i];
    }
    //baki recursion sambhal lega
    findMax(arr,n,i+1,maxi);
}
int main(){
      int arr[] = {10,44,32,56,64,67,90,12};
      int n =8;
      int maxi = INT_MIN;
      int i =0;
      findMax(arr,n,i,maxi);

      cout << "maximum number is maxi:  " << maxi << endl;

    return 0;
} 