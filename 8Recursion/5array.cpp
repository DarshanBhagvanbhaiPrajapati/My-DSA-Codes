//accesing array elements using recursion
#include<iostream>
using namespace std;

void print(int arr[] , int n,int i){
    //base case
    if(i>=n){
        return;
    }
    //1 case solve krdia
    cout << arr[i] << "->" ;
    //baki recursion sambhal lega
    print(arr,n,i+1);
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n=5;
    int i=0;
    print(arr,n,i);

    return 0;
} 
 //normal method
//for(int i=0;i<n;i++){
//     cout << arr[i]
// }