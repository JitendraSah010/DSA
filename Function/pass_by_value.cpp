#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    dummy(n);
    
    cout<<"Number n is "<<n;
}