//printing elements in row wise
#include<iostream>
using namespace std;
int main(){

    int arr[3][3];
    int brr[3][3]={{1,2,3},{4,5,6},{2,4,8}};

    //row wise print
    //outer loop
    for(int i=0;i<3;i++){
        //for every row,we need to print value in each column
        for(int j=0;j<3;j++){
            cout << brr[i][j]<< " ";
        }
        cout << endl;
    }
    //for column wise output only change in line 14 
    //  cout << brr[j][i]<< " ";  
    //for taking input only cin;

    return 0;
}