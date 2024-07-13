
#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;//as starting from last
    }
    //functions
    void push1(int data){
        if(top2 - top1 == 1){
            //space not available
            cout << "OVERFLOW" << endl;
        }
        else{
            //space available
            top1++;
            arr[top1] = data;
        }

    }
    void pop1(){
        if(top1 == -1){
            //stack empty
            cout << "UNDERFLOW in stack 1" << endl;
        }
        else{ // stack not empty
            top1--;
        }
    }
    void push2(int data){
        if(top2 - top1 == 1){
            //space not available
            cout << "OVERFLOW" << endl;
        }
        else{
            //space available
            top2--;
            arr[top2] = data;
        }

    }
    void pop2(){
        if(top2 == size){
            //stack empty
            cout << "UNDERFLOW in stack 2" << endl;
        }
        else{ // stack not empty
            top2++;
        }

    }
};
int main(){
    Stack s(9);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);

    s.push2(100);
    s.push2(200);
    s.push2(300);
    s.push2(400);
    s.push2(500);
    s.push2(600); // As it will overflow because size is 10


    
    return 0;
}