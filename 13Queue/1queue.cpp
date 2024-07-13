#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation
    queue<int>q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);
    
    //size 
    cout << "size of que: " <<  q.size()<<endl;
    //pop delete FIFO
    q.pop();
    cout << "size of queue after poped: " <<  q.size()<<endl;

    if(q.empty()){
        cout << "queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    //printing front element
    cout <<"front element is :"<<q.front()<<endl;
    
    return 0;
}