//method 1 using stack , method 2
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// void reverse(queue<int> &q){
//     stack<int>s;
//     //step 1
//     //push all elements of queues into stack
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();

//         s.push(element);
//     }
//     //step:2 put all element of stack into queue
//     while(!s.empty()){
//         int element = s.top();
//         s.pop();

//         q.push(element);
//     }
// }
//using recursion
void reverseRecursion(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }
    //step 1
    int temp = q.front();
    q.pop();

    //baki recursion
    reverseRecursion(q);

    //back
    q.push(temp);
}
int main(){
    //creation
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    
    // //M1 using stack
    // reverse(q);
    // cout << "printing queue in reverse" <<endl;
    // while(!q.empty()){
    //     cout << q.front() << " "<<endl;
    //     q.pop();
    // }

    // // M2 using recursion
    reverseRecursion(q);
    cout << "printing queue in reverse using recursion" <<endl;
    while(!q.empty()){
        cout << q.front() << " "<<endl;
        q.pop();
    }
    return 0;
}