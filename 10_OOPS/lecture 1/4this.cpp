//using dnamic memory
#include <iostream>
using namespace std;

class Animal {
private:
    int Weight;

public:
    // Public properties
    int age;
    string name;

    // Public behaviors or functions
    void eat() {
        cout << "eating now" << endl;  
    }
    void sleep() {
        cout << "sleeping now" << endl;
    }
    // Getter for Weight
    int getWeight() {
        return Weight;
    }
    // Setter for Weight
    void setWeight(int weight) {
       this -> Weight = weight;     //this is a pointer to current object means upper vals wight line 7
    }
};
int main() {

    //dynamic
    Animal* suresh = new Animal;
    (*suresh).age = 20; // we used *suresh because only suresh will point addresh so we *
    (*suresh).name = "billi";

    //alternate we can create or access -> this operaror
    suresh -> age=20;
    suresh -> name = "kutta";

    suresh->eat();
    suresh->sleep();

    return 0;
   
}