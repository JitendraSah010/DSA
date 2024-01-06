#include<iostream>
using namespace std;
/*
    bubble sort => for ith round, ith largest element is place at its right position

    time complexity =>  Best case  O(n), linear
                    =>  Worst case O(n^2)

    stable      => because we swap only if a is greater than b 
    
    In Place algorithm  => because no extra space is used by this sorting algorithm
*/


void printSortedArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int Bubble_sort(int arr[], int n){    

    bool swapped = false;              // for best case time complexity, swapped is used

    for(int i=1; i<n; i++){                //  round 1 ==>  i=1 

        for(int j=0; j< n-i; j++){          //for every ith round => ith largest element is sorted so, j< n-i instead of j<n-1 
            int a = j;
            int b = j+1;
            if(arr[a]>arr[b]){
                swap(arr[a], arr[b]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    printSortedArray(arr, n);
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

    Bubble_sort(array, size);

}
