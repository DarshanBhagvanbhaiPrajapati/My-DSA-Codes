#include<iostream>
using namespace std;


class abc{
    int x;
    int *y;
    public:
    abc(){
        x=0;
        y =new int(0);
    }
    int getX() const { 
        // x = 50;// if we write const here then we cant initialise new value to x
        return x;
    }
    void setX(int _val){
        x = _val;
    }
     int getY(){
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
};
int main(){
    abc a;
    cout << a.getX() << endl;
    cout << a.getY() << endl;
    return 0;
}

int main2(){
    // const int a=10;
    // // int a=4; we can not redeclere
    // cout << a <<endl;
//------------------------------------------------------------------//
    // //2. const with pointers
    // const int* a=new int(2); //CONST data ,NON-CONST pointer.
    // int const *a =new int(2); //same us upper line
    // cout << *a <<endl;
    // // *a=20; //cant change the content of pointer
    // // cout << *a <<endl;
    // int b=20;
    // a = &b;;//pointer itself can be reassigned.
    // cout << *a <<endl;
//---------------------------------------------------------------------//
    // //. CONST pointer ,but NON-CONST data.
    // int *const a =new int(2);
    // cout << *a <<endl;
    // *a =20; //chal jyega
    // cout << *a <<endl;
    
    // int b=50;
    // // a=&b;//nahi chalege ,because pointer CONST
//-------------------------------------------------------------------//
    // // 3.CONST ponter Const data
    const int *const a= new int(10);
    cout << *a <<endl;
    // *a =50; //we cant assign because all is const
    // cout << *a <<endl;

    // int b=100;
    // a =&b; //we cant

    return 0;

}