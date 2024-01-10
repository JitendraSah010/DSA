#include<iostream>
#include<vector>
using namespace std;

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


int main(){
    
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

}