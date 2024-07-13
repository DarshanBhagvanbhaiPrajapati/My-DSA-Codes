#include<iostream>
using namespace std;

class A{
    private:
    int x;

    public:
    A(int _value):x(_value){};

    int getX()const {return x;}
    void setX(int _value){x= _value;}

    friend class B; //for accessing private element
};

class B{
    public:
    void print(const A&a){
        // cout << a.getX() <<endl;
        cout << a.x <<endl; //i cant acces
    }
};

int main(){
    A a(5);
    B b;
    b.print(a);


    return 0;
}