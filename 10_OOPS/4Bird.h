#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
class Bird{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
    //classes that inheritats this class
    //has to implement pure viirtual class
};

class sparrow:public Bird{
    public:
    void eat(){
        std::cout << "sparrow is eating\n";
    }
    void fly(){
        std::cout << "sparrow is flying\n";
    }
};

class eagel:public Bird{
    public:
    void eat(){
        std::cout << "eagle is eating\n";
    }
    void fly(){
        std::cout << "eagle is flying\n";
    }
};
#endif // BIRD_H
