//making own queue using functions
#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data){
        if(rear == size){
            cout << "queue is full" << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front == rear){
            cout << "queue is emty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front =0;
                rear =0;
            }
        }
    }
    int getfront(){
        if(front == rear){
            cout << "queue is emty"<<endl;
            return  -1;
        }
        else{
            return arr[front];
        }
    }
    bool isempty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }
    int getsize(){
        return rear - front;
    }
};

int main(){    
    Queue q(10);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);
    
    cout << "size of queue is: " <<q.getsize() <<endl;
    q.pop();
    cout << "size of queue after poping is: " <<q.getsize() <<endl;
    cout << "front element is" << q.getfront() <<endl;

    if(q.isempty()){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty"<<endl;
    }
    return 0;
}