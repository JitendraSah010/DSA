#include<iostream>
#include<list>
using namespace std;
int main(){
    // LIST OPERATIONS
    // same as previous array, vector, deque operations 
    // .at()  => randomly not alloweded. traverse one by one to find

    // create
    list<int> l;
    l.push_front(1);
    l.push_back(2);

    for(int i:l){
        cout<<i<<" "; 
    }

    cout<<endl;

    // l.pop_back();
    // for(int i:l){
    //     cout<<i<<" "; 
    // }

    // erase
    l.erase( l.begin() );
    for(int i:l){
        cout<<i<<" "; 
    }
}