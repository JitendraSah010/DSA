#include<iostream>
#include<deque>
using namespace std;
int main(){
    // DEQUE OPERATIONS

    // (1) create deque
    deque<int> d;

    // (2) push (insertion) from back
    d.push_back(1);

    // (3) push from front
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);

    for(int i=0; i<d.size();i++){
        cout<<d[i]<<" ";
    } cout<<endl;

    // (4) pop (deletion or removal) from back
    //d.pop_back();

    // (5) pop (deletion or removal) from front
    //d.pop_front();

    // (6) access first element
    cout<<"The first element is "<<d.front()<<endl;

    // (7) access last element
    cout<<"The last element is "<<d.back()<<endl;

    // (8) empty or not check
    cout<<"Deque is empty or not "<<d.empty()<<endl;

    // (9) Erase or delete element from begin or end
    cout<<"size before deletion "<<d.size()<<endl;
    d.erase( d.begin(), d.begin()+1 );
    d.erase( d.end(), d.end()+1 );
    cout<<"size after deletion "<<d.size()<<endl;

}