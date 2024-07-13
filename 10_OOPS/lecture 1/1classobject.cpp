#include<iostream>
using namespace std;

class animal{
    public: //by default privat hota he so we need to change into public
    //property
    int age;
    string name;

    //behaviour or functions
    void eat(){
        cout << "eating now" << endl;  
    }
    void sleep(){
        cout << "sleeping now " << endl;
    }
};
int main(){
    //object creation 1=> we are creating using static method

    //static
    animal ramesh;
    ramesh.age = 18;
    ramesh.name = "LION";
    cout << "age of ramesh is : " << ramesh.age <<endl;
    cout << "name of ramesh is : " << ramesh.name <<endl;

    ramesh.eat();
    ramesh.sleep();

    //dynamic

    return 0;
}
