#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    //step 1=choose pivot element
    int pivotIndex = s; //first element
    int pivotElement = arr[s];

    //step 2 = find right postion for pivot element and place it there
    int count =0;
    for(int i=s+1; i<=e ; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    //jab me loop se bahar aaya toh mera pivot ki sahi position ki index ready he
    int rightIndex = s + count; //(right means sahi index)
    swap(arr[pivotIndex] , arr[rightIndex]);
    pivotIndex = rightIndex;

    //step 3 = pivot ke left me chote and right me bade elements
    int i = s;
    int j = e;
        //for left ke liyr
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivotElement){
            i++;
        }
         // for right ke liye
        while(arr[j] > pivotElement){
            j--;
        }
        //2 case ho sakte he
        //a)you found the elements to swap
        //b)no need to swap
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    //Base case 1)when s greteer than e so invalid and equal to e means already sorted array
    if(s>=e)
       return;

    //partition logic , return pivotindex
    int p=partition(arr,s,e); //p is index of pivot element

    //Recursive calls
    //pivot element left call
    quickSort(arr,s,p-1); //because (p-1) index from s
    //pivot element right call
    quickSort(arr,p+1,e);
}
int main(){
    int arr[] = {8,1,3,4,20,50,30};
    int n=7;
    //try with this also
    //int arr[] = {8,1,3,4,20,2,50,50,50,50,50,50,30};
    //int n=13;
    
    int s=0;
    int e = n-1;

    quickSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
