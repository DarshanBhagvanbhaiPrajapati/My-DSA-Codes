#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    //s1 top element nikal lo
    int topElement = s.top();
    s.pop();
    //recu call mardo
    solve(s,target);
    //backtracking
    s.push(topElement);
}
void insertAtBottom(stack<int> &s){
    if(s.empty()){
        cout << "stack is empty , cant inser at bottom" <<endl;
        return;
    }

    int target = s.top();
    s.pop();
    solve(s,target);
}

int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    insertAtBottom(s);
    cout << "printing" <<endl;

    while(!s.empty()){
        cout << s.top() << " "<<endl; // as niche 50 pada he
        s.pop();
    }
    cout << endl;

    return 0;
}