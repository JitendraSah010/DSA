#include<iostream>
using namespace std;

bool isPrime(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}

int main(){
    int ans = isPrime();
    if(ans==1){
        cout<<"Prime number";
    }else{
        cout<<"Not prime";
    }
}