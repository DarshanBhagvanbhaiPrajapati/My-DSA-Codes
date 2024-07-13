#include<iostream>
#include "4Bird.h"
using namespace std;

void Birddoessomething(Bird*&bird){
    bird->eat();
    bird->fly();
    bird->eat();

}

int main(){
    Bird *bird = new sparrow();
    Birddoessomething(bird);
    return 0;
}