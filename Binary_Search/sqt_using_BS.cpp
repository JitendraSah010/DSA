#include<iostream>
using namespace std;

// finding square root without point value
int sqt_root(int n){
    int s = 0;
    int e = n;
    long long int mid = s+(e-s)/2;
    long long int sqt = mid*mid;              //for out of int range long long int is used
    long long int ans = -1;
    while(s<=e){
        if(sqt > n){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s + (e-s)/2;
        sqt = mid*mid;
    }
    return ans;
}

// finding point precision
double FinalSoln(int n, int tempSoln, int precision){
    double factor = 1;
    double ans = tempSoln;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j= tempSoln; j*j<n; j = j + factor){
            ans = j;
        }
    }
    return ans;
    cout<<"The answer is:"<<ans;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int tempSoln = sqt_root(n);
    cout<<"The square root of "<< n <<" is "<<tempSoln<<endl;
    double Answer = FinalSoln(n, tempSoln, 3);
    cout<<"the final answer is: "<< Answer;
}