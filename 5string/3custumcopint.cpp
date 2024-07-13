// this code is running on online compiler like gdb
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;

}
int main(){
    vector<int>v{5,3,2,4,1};
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}