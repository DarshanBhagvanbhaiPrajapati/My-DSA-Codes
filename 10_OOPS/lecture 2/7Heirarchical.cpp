//heirarchical 
#include<iostream>
using namespace std;

class car{ //parent class
    public:
    string name;
    int weight;
    int age;

    void speedup(){
        cout << "speeding up" <<endl;
    }
    void Breakmaro(){
        cout << "break please" <<endl;
    }
};
class audi:public car{
    
};
class rolls:public car{

};
int main(){
    audi Q7;
    Q7.speedup();

    rolls royal;
    royal.speedup();
    
    return 0;
}
