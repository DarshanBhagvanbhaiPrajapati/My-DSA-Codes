#include<iostream>
using namespace std;

class Animal{
    //parent class
    public:
    int age;
    int weight;
    void eat(){
        cout << "eating" <<endl;
    }
};
//child class
class Dog: public Animal{
     
};
int main(){
    Dog d1;
    d1.eat(); //it will print eating because as eat function in parent class 
    return 0;
}
