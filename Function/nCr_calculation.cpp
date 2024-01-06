#include<iostream>
using namespace std;

// int combination(){
//     int n,r ;
//     cout<<"Enter the n:";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     int sub = (n-r);
//     int ans;

// // n factorial
//     int n_factorial=1;
//     for(int i=1; i<=n; i++){
//         n_factorial = n_factorial * i;
//     }
//     // cout<<"n_ factorial is: "<<n_factorial<<endl;

// // r factorial 
//     int r_factorial=1;
//     for(int i=1; i<=r; i++){
//         r_factorial = r_factorial * i;
//     }
//     // cout<<"r_ factorial is: "<<r_factorial<<endl;

// // n-r factorial 

//     int n_r_factorial=1;
//     for(int i=1; i<=sub; i++){
//         n_r_factorial = n_r_factorial * i;
//     }
//     // cout<<"r_ factorial is: "<<n_r_factorial<<endl;


// // Final answer
//     ans = n_factorial/( r_factorial* n_r_factorial );
//     cout<<"The combination is: "<<ans;
// }
int factorial(int n){
        int fact = 1;
        for(int i=1; i<=n; i++){
            fact = fact*i;
        }
        return fact;
    }
int combination(){
    int n,r ;
    cout<<"Enter the n:";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int Answer = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"The combination is: "<<Answer;
}
int main(){
    combination();
}