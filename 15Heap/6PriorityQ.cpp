//lecture 2 priority queue , we can use STL as queue for heap
//MAx heap
#include<bits/stdc++.h>
using namespace std;

int main(){
    //max heap
    priority_queue<int>pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout << "top elemetn is : " << pq.top() << endl; //as max heap so 9?
    pq.pop();
    cout << "top elemetn after deleting 9 is : " << pq.top() << endl;
    pq.pop();
    cout << "top elemetn is : " << pq.top() << endl;
    pq.pop();
    cout << "top elemetn is : " << pq.top() << endl;
    pq.pop();
    cout << "top elemetn is : " << pq.top() << endl;
    pq.pop();

    cout << "size of heap is : " << pq.size() << endl;
    if(pq.empty()){
        cout << "Max heap is empty" << endl;
    }
    else{
        cout << "Max heap is not empty" << endl;
    }

    return 0;
}