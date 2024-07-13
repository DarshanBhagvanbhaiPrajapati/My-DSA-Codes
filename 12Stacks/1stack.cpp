//using STL standard templet library in this 
#include<bits/stdc++.h> 
// #include<iostream>
// #include<stack>
using namespace std;

int main(){ 
    //crate a stack
    stack<int>st;

    //insert into stack using push
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    //removing element 
    st.pop();

    //seeing peak element on top
    cout << "top element is: "<< st.top() << endl;

    //checking size of stack
    cout << "size of stack is : " << st.size()<<endl;

    if(st.empty()){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" <<endl;
    }
    return 0;
}