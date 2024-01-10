#include<iostream>
#include<vector>
using namespace std;
int main(){
    // VECTOR OPERATIONS

    // (1) create
    vector<int> v;
    
    vector<int> a(5);             //create vector of size 5. default all elements 0
    for(int i=0;i< a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    vector<int> b(5,1);             //create vector of size 5 and initialise all elements with 1
    for(int i=0;i< b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    // (7) copy one vector into another
    vector<int> last(b);
    cout<<"Vector after copying"<<endl;
    for(int i=0;i< last.size(); i++){
        cout<<last[i]<<" ";
    }
    cout<<endl;

    // (2)capacity
    cout<<"capacity: "<<v.capacity()<<endl;

    // (3) push element 
    v.push_back(1);
    
    // (4) size
    cout<<"size "<<v.size();    
    cout<<"capacity: "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"size "<<v.size();    
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size "<<v.size();    
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"size "<<v.size();    
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"size "<<v.size();    
    cout<<"capacity: "<<v.capacity()<<endl;

    // all STL array operations
    // front
    cout<<"front element is "<<v.front()<<endl;
    // back
    cout<<"back element is "<<v.back()<<endl;


    // (5) pop back
    cout<<"before pop back  ";
    for(int i=0;i< v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

    cout<<"after pop back  ";
    v.pop_back();
    for(int i=0;i< v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

    // (6) clear
    cout<<"before clear size is "<<v.size();
    cout<<"  and capacity is "<<v.capacity();
    cout<<endl;

    v.clear();

    cout<<"After clear size is "<<v.size();
    cout<<"  and capacity is "<<v.capacity();
    cout<<endl;

}