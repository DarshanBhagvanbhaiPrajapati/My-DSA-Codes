#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s +1; //length of first array
    int len2 = e - mid; //length of second array as e-(mid+1) + 1;

    //we can create array dynamically
    int* left = new int[len1];
    int* right = new int[len2];

    //copy karo left values and right values
    int k =s;
    for(int i=0;i<len1;i++){
        left[i] = arr[k];  //left array elements ko copy kiya
        k++;
    }
    k = mid+1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k]; //right array elements ko copy kiya
        k++;
    }
    //now merging two sorted array
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;//index starting from s

    while(leftIndex <len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    //copy logic for left array
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    //copy logic for right array
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    
    //TODO : delete left array and right array so space bach jaye
}
void mergeSort(int *arr,int s,int e){
    //base case,if s == e single elemetn then already sorted
    //if s>e then invalid  
    if(s >= e){
        return;
    }
    int mid = s+(e-s)/2 ;
    //then left part todo and sort
    mergeSort(arr,s,mid); //remember recursion apne app kar lega
    // right part todado 
    mergeSort(arr,mid+1,e);
    //now merge both sorted array
    merge(arr,s,e);
}
int main(){
    int arr[] = {4,5,13,2,12};
    int n=5;

    int s=0;
    int e = n-1;

    mergeSort(arr,s,e);

    //printing the array after merge sorting
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    cout << endl;
    return 0;
}