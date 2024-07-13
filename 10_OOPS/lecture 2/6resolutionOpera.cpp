//this multiple jo do class ko milakar third bana hoga
//resolution operator ::
#include<iostream>
using namespace std;

class A{
    public:
    int chemistry;
    A(){
        chemistry =101;
    }
};
class B{
    public:
    int chemistry;
    B(){
        chemistry = 500;
    }
};
class C:public A,public B{
    public:
    int Maths;
};
int main(){
    C Obj;
    cout << Obj.A::chemistry << " "<<Obj.B::chemistry << endl; //this will acces chemistry of A class and B
    
    
    return 0;
}
