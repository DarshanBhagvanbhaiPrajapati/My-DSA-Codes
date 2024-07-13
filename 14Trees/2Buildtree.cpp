//using level order Traversal
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

    
    Node(int data){
        this->data = data;
        right = NULL;
        left  = NULL;
    }
};
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    //initially
    q.push(root);

    while(!q.empty()){
        //A
        Node* temp = q.front();
        //B
        q.pop();
        //c
        cout << temp->data << " ";
        //D
        if(temp->left){
            q.push(temp->left);
            
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
Node* BuildTree(){
    int data;
    cout << "entre the data: "<<endl;
    cin >> data;
    //Base case
    if(data == -1){
        return NULL;
    } 
    //now step 1: crate a Root node
    Node* root = new Node(data);

    cout << "entre data for left part of: " <<data <<"NODE" <<endl;
    //step 2 = left call
    root->left = BuildTree();
 
    cout << "entre data for right part of: " <<data <<"NODE" <<endl;
    //step 3 right call
    root ->right = BuildTree();

    return root;
}

int main(){
    Node* root = NULL;
    root =  BuildTree();

    levelOrderTraversal(root);
    
    return 0;
}