#include<iostream>
using namespace std;

// (1) Arithmetic Progression (A.P) for nth term
int AP_nth_term(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int nth_term = ( 3*n+7 );
    return nth_term;
}

// (2) find total number of set bit (i.e 1) from a and b
int findSetBit(int n){
    int count = 0;
    while(n!=0){
        int bit = n&1;
        if(bit == 1){
            count++;
        }
        n= n>>1;
    }
    return count;
}

void Total_setbit(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    int total_setbits= findSetBit(a)+ findSetBit(b);
    cout<<"The total set bits in "<<a <<" and "<<b <<" is "<<total_setbits;
}

// (3) find the fibonacci series 
int fibonacci(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a = 0;
    int b = 1;
    int nextNumber;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
        nextNumber = a+b;
        a=b;
        b=nextNumber;
        cout<<nextNumber<<" ";
    }
}


int main(){
    // int ans = AP_nth_term();
    // cout<<"The nth term is: "<<ans;
    // Total_setbit();
    fibonacci();
}