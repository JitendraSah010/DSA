#include<iostream>
#include<queue>
using namespace std;

int main(){
    // QUEUE OPERATIONS
    // (1) create
    queue<string> q;
    
    // (2) push
    q.push("Jitendra");
    q.push("Kumar");
    q.push("sah");

    // (3) pop
    cout<<"size before pop" << q.size()<<endl;
    q.pop();

    cout<<"first element " <<q.front() <<endl;

    // (4) size
    cout<<"size after pop" << q.size()<<endl;
}