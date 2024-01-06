#include<iostream>
using namespace std;
/*
    Insertion sort => compare and shift to make empty place then again compare after that place element at right position 
                   =>Divide array into 2 part i.e sorted & unsorted then, compare unsorted element with sorted and insert element at its right index by comparing and shifting

    time complexity =>  Best case  O(n), linear
                    =>  Worst case O(n^2)

    space complexity => O(1) 

    Adaptable   =>with chnage in input behaviour time complexity changes. eg: time complexity of sorted arrar = O(n) in insertion sorting3
    stable      => because we swap only if a is greater than b 
    scope       => used for small size and partially sorted array
*/

// printing the sorted array
    void printArray( int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }

    void insertion_sort(int arr[], int n){
        for(int i=1; i<n; i++){                       // i=1  instead------->  i=0 beacuse we assume 0th index is already sorted
            int temp = arr[i];

            int j = i-1;                               // taking i-1 index for starting comparision
            for( ; j>=0; j--){
                if(arr[j]> temp){
                    // shift and make empty space by copying j index element to j+1 index;
                    arr[j+1] = arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1] = temp;                      //put element to empty space which is its actual position
        }
        printArray(arr, n);
        cout<<endl;
    }

    
//USING WHILE LOOP
    void insertion_sort1(int arr[], int n){
        int i=1;
        while(i<n){
            int temp = arr[i];

            int j=i-1;
            while(j>=0){
                if(arr[j]>temp){
                    // shift to create empty space by copying element to jth index
                    arr[j+1] = arr[j];
                    j--;
                }
                else{
                    break;
                }
            }
            // after ending inner loop comparision we will find actual place of element to be placed so, placing element at right index 
            arr[j+1] = temp;
            i++;
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
    insertion_sort(array, size);
    insertion_sort1(array, size);
}