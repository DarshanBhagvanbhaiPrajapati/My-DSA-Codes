#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    unordered_map<string, int>m;//as stored in key value form
    //insertion
    pair<string, int>p=make_pair("scorpio",9);
    m.insert(p);

    //m2 for insertion
    pair<string,int>p2("alto",2);
    m.insert(p2);

    //m3 for insertion this method will create 1size in map either it will exist or not
    m["fortuner"] = 10;

    //access
    cout << m.at("alto") << endl;
    cout << m["fortuner"] << endl;

    //search
    cout << m.count("innova") << endl;
    //search m2
    if(m.find("fortuner") != m.end()){
        cout << "fortuner found" <<endl;
    }
    else{
        cout << "fortuner not found" <<endl;
    }
    //size
    cout << m.size() <<endl;
    cout << m["hummer"]<<endl; // will print 0 as no value for it
    cout << m.size() << endl;  //see in  notebook
    
    cout << "printing all entries" << endl;

    for(auto i:m){
        cout << i.first << "->" << i.second<<endl;
    }
    return 0;
}