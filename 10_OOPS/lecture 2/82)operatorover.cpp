//operrator overloading
#include<iostream>
using namespace std;

class Para{
    public:
    int val;

    // Overload the + operator to print the difference
    void operator+(Para& obj2){
        int val1 = this->val;
        int val2 = obj2.val;
        cout << (val2 - val1) << endl;
    }
};

int main(){
    Para obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    // This should print the difference between them
    obj1 + obj2;//ans will be -5,as obj 1 treat as current obj and obj2 trat as input parameter
    return 0;
}

