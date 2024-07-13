#include<bits/stdc++.h>
using namespace std;


void Heapiy(int arr[],int n, int i){
    int index = i;
    int leftIndex = 2*i;
    int rightIndex = 2*i +1;
    int largest = index;//assumed

    if(leftIndex <= n && arr[largest] < arr[leftIndex]){
        largest = leftIndex;
    }
    if(rightIndex <= n && arr[largest] < arr[rightIndex]){
        largest = rightIndex;
    }
    if(index != largest){
        //left ya right node me se koi greater ho gaya
        swap(arr[index] , arr[largest]);
        index = largest;
        //baki indexes recursion sambhal lega
        Heapiy(arr,n,index);
    }
}
void BuildHeap(int arr[],int n){
    for(int i = n/2;i>0;i--){
        Heapiy(arr,n,i);
    }
}
int main(){
    int arr[] = {-1,12,15,13,11,14};
    int n = 5;
    BuildHeap(arr,n);
    cout << "printing the heap" << endl;
    for(int i=0;i<=n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
