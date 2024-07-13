//single inheritance
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
    //this is single level inheritance
};

int main(){
    audi Darshan;
    Darshan.speedup();
    
    return 0;
}
