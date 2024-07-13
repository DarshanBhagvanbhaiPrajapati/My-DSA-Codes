//copy constructor
#include <iostream>
using namespace std;

class Animal {
private:
   int weight;
public:
    int age;
    string name;

    //constructor = default hota he (for initialuization)
    Animal(){
        this->weight=0; //initialization
        this->age = 0; // we will use this whenever we point to object in class
        this->name ="";
        cout << "constructor called " << endl;
    }

    //parameterized constructor
    Animal(int age){
        this->age=age;
        cout << "parameteried constructor called" <<endl;
    }
    //another
    Animal(int age,int weight){
        this->age = age;
        this ->weight=weight;
        cout << "parameterised 2 called" << endl;
    }
    //copy constructor
    Animal(Animal& obj){ //we have done pass by referense as in pbv infi loop will run
        this->age=obj.age;
        this->weight=obj.weight;
        this->name = obj.name;
        cout << "i am inside copy const "<<endl;
    }

};
int main() {
    Animal a(10);//statically
    Animal* b =new Animal(100,80); //dynamically,this will call where 2 parameter called

    //object copy
    Animal c=a;
    //or we can copy by Animal a(b);
    
    return 0;
   
}