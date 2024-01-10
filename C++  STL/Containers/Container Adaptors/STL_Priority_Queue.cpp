#include<iostream>
#include<queue>
using namespace std;
int main(){
    // PRIORITY QUEUE 
    // (1) create
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    // (2) push into priority_queue
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    // (3) size
    cout<<"size of maxi priority_queue: "<<maxi.size()<<endl;

    // (printing and fetching top maxi queue element)
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<<"size of maxi priority_queue: "<<maxi.size()<<endl;


    // ----------------min heap ------------
    mini.push(5);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    mini.push(1);

    cout<<"mini heap size before pop"<<mini.size()<<endl;

    // printing and fetching top element
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    } cout<<endl;

    cout<<"mini heap size after pop  "<<mini.size();



}
