#include<iostream>
using namespace std;

int square_root(int num){
    int s = 0;
    int e = num;
    long long int mid = s + (e-s)/2;
    long long int ans = 0;
    while(s<=e){
        long long int mul = mid*mid;
        if( mul > num ){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The square root is: "<< square_root(num);
}