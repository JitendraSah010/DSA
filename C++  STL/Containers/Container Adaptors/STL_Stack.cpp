#include<iostream>
#include<stack>
using namespace std;
int main(){
    //STACK OPERATIONS
    // (1) create stack
    stack<string> s;
    
    // (2) push
    s.push("jitendra");
    s.push("kumar");
    s.push("sah");

    // (3) pop
    cout<< "top element is: " << s.top()<<endl;

    // (4) size
    cout<<"size of stack is: "<<s.size()<<endl;

    // (5) empty
    cout<<"is stack empty: "<<s.empty();

}