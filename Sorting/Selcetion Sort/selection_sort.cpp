#include<iostream>
using namespace std;
/*
Selection sort => In every round/pass find minimum element from array and place it at right index

    time complexity =>  O(n^2)  (best case & worst case)
    space complexity => O(1);

    stable      => because we swap only if a is greater than b 
    scope       => used in case of small array

*/



// printing sorted array
void printSortedArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int selection_sort(int arr[], int size){
    for( int i=0; i<(size-1); i++ ){
        int minIndex = i;
        
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap( arr[i], arr[minIndex] );
    }
    printSortedArray(arr, size);
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int array[100];
    cout<<"Enter the elements of the array: ";
    for( int i=0; i<size; i++){
        cin>>array[i];
    }

    selection_sort(array, size);
}