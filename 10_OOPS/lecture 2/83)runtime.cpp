//function overriding
#include<iostream>
using namespace std;

class Animal{
    public:
     void speak(){
        cout << "speaking" << endl;
    }
};
class dog: public Animal{
    public:
    //function overriding
    void speak(){
        cout << "Barking" << endl;
    }
};

int main(){
    // Animal a;3
    // a.speak(); this will print speaking

    // dog d1;
    // d1.speak(); // this will print Barking

    //dynamically
    // Animal* a1 = new Animal();
    // a1->speak();

    // dog* d2 = new dog();
    // d2->speak();
    
    //upcasting
    Animal* a3= new dog();
    a3->speak();
    return 0;
}