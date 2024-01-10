#include<iostream>
using namespace std;
// printing array
void printArray( int arr[], int n ){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// move zero to right
void move_zeroes( int arr[], int n ){
    int i=0;
    for( int j=0; j<n; j++){
        if(arr[j] != 0 ){
            swap( arr[j], arr[i] );
            i++;
        }
    }

    printArray(arr, n);
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

    move_zeroes(array, size);

}