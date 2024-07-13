//polymorphism
#include<iostream>
using namespace std;

class math{
    public:
    //this is called function overloading
    int sum(int a,int b){
        cout << "i am inside first signature" <<endl;
        return a+b;
    }
    int sum(int a,int b,int c){
        cout << "i am inside second signature" <<endl;
        return a+b+c;
    }
    int sum(int a,float b){
        cout << "i am inside third signature" <<endl;
        return a+b;
    }
};
int main(){
    math obj;
    cout << obj.sum(1,2,3) << endl;
    return 0;
}
