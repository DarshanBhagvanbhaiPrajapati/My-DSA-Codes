//as stack me indexing nhi hoti we are converting into array
#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        arr = new int[size];
        this -> size = size; // indicating array size
        top = -1; //as empty ho thats why if we initialize with 0 then also it is filled
    }
    //function
    void push(int data){
        if(size - top > 1){
            //space available he so top ++ and data ko top me
            top++;
            arr[top] = data;
        }
        else{
            //sapce not available 
            cout << "Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            //stack is empty
            cout << "stack is Underflow , can not delete element" <<endl;
        }
        else{
            //stack is not empty
            top--;
        }
    }
    int getTop(){
        if(top == -1){
            cout << "there is no elemetn in stack " << endl;
        }
        else{
            return arr[top];
        }
    }
    //this represent number of valid elements present in stack
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    //creation
    Stack s(4); // as we have passed size if we pass  3 size then stack will overflow 
    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout << s.getTop()<<endl;
        s.pop();
    }
    cout << "size of stack is: "<<s.getSize()<<endl;
    return 0;
}