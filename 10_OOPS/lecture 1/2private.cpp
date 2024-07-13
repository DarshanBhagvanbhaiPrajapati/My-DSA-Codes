//accesing private elements using getters and setters
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
    void setWeight(int w) {
        Weight = w;     
    }
};
int main() {
    // Static object creation
    Animal ramesh;
    ramesh.age = 18;
    ramesh.name = "LION";

    cout << "Age of ramesh is: " << ramesh.age << endl;
    cout << "Name of ramesh is: " << ramesh.name << endl;

    ramesh.eat();
    ramesh.sleep();

    //to private member
    ramesh.setWeight(100); // Set the weight of ramesh
    cout << "Weight: " << ramesh.getWeight() << endl;

    // Dynamic object creation (if needed)
    // Animal* dynamicAnimal = new Animal();

    return 0;
   
}