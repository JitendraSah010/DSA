#include<iostream>
#include<vector>
using namespace std;
/*
void printArray( int temp[], int n ){
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}

void rotate_array(int arr[], int n, int k){
    int temp[n];

    for(int i=0; i<n; i++){
        temp[ (i+k)% n ] = arr[i];
    }

    printArray( temp, n );
}
*/

void rotate1( vector<int> v, int k){
    vector<int> temp (v.size());

    for(int i=0; i<v.size(); i++){
        temp[(i+k)%v.size()] = v[i];
    }
    v = temp;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}


int main(){
   /* 
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int array[100];
    cout<<"Enter the array elements: ";

    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    int k;
    cout<<"Enter the times to be rotated: ";
    cin>>k;

    rotate_array( array, size, k );
*/

// ----------------------------solve using vector--------------
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    int l;
    cout<<"Enter the times to be rotated: ";
    cin>>l;

    rotate1(v,l);
}