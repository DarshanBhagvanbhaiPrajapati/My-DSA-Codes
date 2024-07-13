//multilevel inheritence
#include<iostream>
using namespace std;

class fruits{
    public:
    string name;
};
class Mango:public fruits{
    public:
    int weight;
};
class kesar:public Mango{
    public:
    int sugarlevel;
};
int main(){
    kesar katch;
    cout << katch.name <<" " << katch.weight << ""<<katch.sugarlevel<<""<<endl;
    
    return 0;
}
