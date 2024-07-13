//kth smallest number in array using heap
#include<bits/stdc++.h>
using namespace std;

int getKthsmallestelement(int arr[],int n,int k){
    //crete max heap
    priority_queue<int>pq;
    //insert initial kth element into array
    for(int i = 0; i<k;i++){
        pq.push(arr[i]);
    }
    //for remaining elem push only if they are nless than top
    for(int i=k; i<n; i++){
        int element = arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(element);        
        }
    }
    int ans = pq.top();
    return ans;
}
int main(){
    int arr[] = {10,8,70,90,4,60,1};
    int n =7;
    int k = 2; // here is k for which we have to find that smallest element
    int ans = getKthsmallestelement(arr,n,k);
    cout << "ans is " << ans << endl;
    return 0;
}