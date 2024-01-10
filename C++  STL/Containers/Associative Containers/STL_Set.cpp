#include<iostream>
#include<set>
using namespace std;
int main(){
    // SET OPERATIONS
    // (1) create
    set<int> s;

    // (2) insert element 
    s.insert(1);                //time complexity of insert operation is: O(logn)
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(5);

    // printing set
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    // (3) erase
    s.erase( s.begin() );
    cout<<"after erasing 1st element"<<endl;
    for(int i:s){
        cout<<i<<endl;
    }

    // erase using iterator
    cout<<"after erasing using iterator "<<endl;
    set<int>:: iterator it = s.begin();
    it++;

    s.erase(it);                //it means s.erase(2)  => iterator incease value by one so 3 is deleted from set data structure

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<"again"<<endl;
    cout<<"after erasing using iterator "<<endl;
    set<int>:: iterator it1 = s.begin();
    it1++;

    s.erase(it1);                //it means s.erase(3)  => iterator incease value by one so 4 is deleted from set data structure

    for(int i:s){
        cout<<i<<endl;
    }


    // (4) count
    cout<<"5 is present or not "<< s.count(5)<<endl;
    cout<<"-5 is present or not "<< s.count(-5);

    // (5) find                 //find kya hai??
    set<int> :: iterator itr = s.find(5);
    itr++;

}