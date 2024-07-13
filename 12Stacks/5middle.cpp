//finding middle element in a stack without deleting any element
#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &s,int &totalsize){
    //agar stack empty ho
    if(s.size() == 0){
        cout << "stack is empty "<<endl;
        return;
    }
    //base case jab middle mil jaye
    if(s.size() == totalsize/2 +1){
        cout << "middle elment is : " << s.top() << endl;
        return;
    }
    //some operations
    int temp = s.top();
    s.pop();

    //baki recusrion sambhal lega
    printMiddle(s,totalsize);

    //backtracking
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalsize = s.size();
    printMiddle(s,totalsize);

    return 0;
}