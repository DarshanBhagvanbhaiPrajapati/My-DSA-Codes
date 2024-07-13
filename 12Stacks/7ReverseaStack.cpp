#include<iostream>
#include<stack>
using namespace std;

// Function to insert an element at the bottom of a stack
void solve(stack<int> &s, int target){
    // Base case
    if(s.empty()){
        s.push(target);
        return;
    }
    // Remove the top element
    int topElement = s.top();
    s.pop();
    // Recursive call
    solve(s, target);
    // Backtracking
    s.push(topElement);
}

// Wrapper function to insert an element at the bottom
void insertAtBottom(stack<int> &s, int target){
    solve(s, target);
}

// Function to reverse the stack using recursion
void reverseStack(stack<int> &s){
    // Base case
    if(s.empty()){
        return;
    }
    
    int target = s.top();
    s.pop();

    // Reverse the remaining stack
    reverseStack(s);

    // Insert the top element at the bottom
    insertAtBottom(s, target);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    cout << "Stack after reversal:" << endl;

    while(!s.empty()){
        cout << s.top() << " "<<endl;
        s.pop();
    }
    cout << endl;

    return 0;
}
