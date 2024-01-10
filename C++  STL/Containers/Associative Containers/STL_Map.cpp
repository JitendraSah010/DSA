#include<iostream>
#include<map>
using namespace std;
int main(){
    // MAP OPERATIONS
    // (1) create
    map<int, string> m;

    // (2) insert key:value pair
    m[1] = "Jitendra";
    m[3] = "sah";                           //sorted map return sorted value & bydefault sorted map 
    m[2] = "Kumar";

    // or insert like
    m.insert( {5, "Bheem"} );

    // printing map value 
    for(auto i:m){
        cout<<i.first<<endl;
    }
    cout<<endl;

    cout<<"element value before erase "<<endl;
    // printing map  key:value   pair
    for(auto i:m){
        cout<<i.first<<"  "<< i.second<<endl;
    }


    // (3) count
    cout<<"Is 3 element pair is present or not "<<m.count(3)<<endl;

    // (4)erase
    m.erase(3);

    cout<<"element pair after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<"  "<< i.second<<endl;
    }

    // (5) find


}