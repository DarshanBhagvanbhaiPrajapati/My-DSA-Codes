#include<iostream>
#include<string.h>
using namespace std;

void replacespaces(char sentense[]){
    int i=0;
    int n=strlen(sentense);
    for(i=0;i<n;i++){
        if(sentense[i] == ' '){
            sentense[i] ='@';
        }
    }
}
int main(){
    char sentense[100];
    cin.getline(sentense,100); // for taking input in spaces also 

    replacespaces(sentense);
    cout << "printing sentenses " << endl << sentense << endl;
    return 0;
}