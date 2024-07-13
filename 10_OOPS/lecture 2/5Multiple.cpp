//this multiple jo do class ko milakar third bana hoga
#include<iostream>
using namespace std;

class A{
    public:
    int physics;
};
class B{
    public:
    int chemistry;
};
class C:public A,public B{
    public:
    int Maths;
};
int main(){
    C Obj;
    cout << Obj.physics << " " <<Obj.chemistry << " " <<Obj.Maths << endl;
    
    return 0;
}
