//destructor = used to delete a memory
#include <iostream>
using namespace std;

class Animal {
private:
   int weight;
public:
    int age;
    string name;

    //destructor
    ~Animal(){
        cout << "i am inside dest" << endl;
    }
};
int main() {
    Animal a;//statically , destructor calls automatically
    a.age = 5;

    Animal* b =new Animal();//dynamically ,we have to do manually
    b -> age = 12;

    //manually
    delete b;
    
    return 0;
   
}