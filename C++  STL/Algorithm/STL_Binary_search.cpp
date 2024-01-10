#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // BINARY SEARCH
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    cout<<"Binary Search  ==>   Element is present: "<<  binary_search( v.begin(), v.end(), 6 ) <<endl;

    // LOWER BOUND
    cout<<"Lower Bound  ==>  lower bound of 6 is "<<lower_bound(  v.begin(), v.end(), 6) -v.begin()   <<endl;

    // UPPER BOUND
    cout<<"Upper Bound  ==>  upper bound of 6 is "<<upper_bound(  v.begin(), v.end(), 6) -v.begin()  <<endl;

    // MAXIMUM
    int a=10;
    int b=20;
    cout<<"Maximum is  ==>  maximum of 10 and 20 is "<<max(a,b)  <<endl;


    // MINIMUN
    cout<<"Minimum is  ==>  minimum of 10 and 20 is "<<min(a,b)  <<endl;


    // REVERSE
    string abcd = "ABCD";
    reverse( abcd.begin(), abcd.end() );
    cout<<"Reverse is  ==>  reverse of ABCD is " << abcd <<endl;

    // ROTATE
    rotate( v.begin(), v.begin()+2, v.end() );
    

    cout<<" Rotation is   ==>   rotation of vector from index 2 is ";
    for(int i:v){
        cout<<i<<"  ";
    }

    // SWAP
    // SORT
    



}