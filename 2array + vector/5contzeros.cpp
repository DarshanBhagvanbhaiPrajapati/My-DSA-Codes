//counts number of 0 and 1 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,1,0,0,0,1,1,0,1,0,0,1,1};
    int size = 15;

    int numZero = 0;
    int numOne = 0;

    for(int i=0;i<size;i++){
        //if zero found increment numZero
        if(arr[i]==0){
            numZero++;
        }
        //if one found increment numOne
        if(arr[i]==1){
            numOne++;
        }
    }
    cout <<"number of zeros " << numZero <<endl;
    cout <<"number of ones " << numOne <<endl;

    return 0;
}