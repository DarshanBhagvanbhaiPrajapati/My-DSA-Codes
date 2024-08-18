#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr{10,20,40,60,70};
    int sum = 80;
    //print all pairs
    //outer loop will traverse for each element
    for(int i=0;i<arr.size();i++){
        int element = arr[i];

        //for every elem we traverse aage vale elements
        for(int j=i+1;j<arr.size();j++){
            if(element + arr[j] == sum){
            cout << "Pair found" << element << "," << arr[j] << endl;
            }
        }
    }
    //also u can do for triple sum u can try it 
    
    return 0;
}