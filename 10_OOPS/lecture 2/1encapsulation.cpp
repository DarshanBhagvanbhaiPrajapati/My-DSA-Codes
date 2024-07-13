//encapsulation and perfect encapsulation
#include<iostream>
using namespace std;

class Animal{

    private: //perfect encapsulation we can access by getters and setters
        int age;
        int weight;
    public:
        void eat(){
            cout << "eating" <<endl;
        }
        //we can acces private elements using getters and setters
        int getAge(){
            return this-> age;
        }
        int setAge(int age){
            this-> age = age;
        }
};
int main(){
    //we have just done this code for understanding encapsulation
    cout << "hii" <<endl;
    return 0;
}
