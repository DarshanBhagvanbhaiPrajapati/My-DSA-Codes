#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    //cin >> str;
    getline(cin,str);
    cout <<"length is: " << str.length() << endl;
    cout <<"isempty: " << str.empty() << endl;
    cout << str << endl;
    str.push_back('A'); // add kartahe
    cout << str << endl;
    str.pop_back(); // remove karta he
    cout << str << endl;
    cout << str.substr(0,4) <<endl;//last me 1 indisces pahele print hogi 

    string a= "darshan";
    string b ="darshann";
    if(a.compare(b)==0){ // compare use to compare two values
        cout << "a and b same" << endl;
    }
    else{
        cout << "a and b not same" << endl;
    }
    return 0;
}