#include<iostream>
#include<algorithm>
using namespace std;

void Merge_sorted_arrays( int arr1[], int n, int arr2[], int m, int arr3[] ){
    int i=0;
    int j=0;
    int k=0;

    // compare & stored element
    while(i<n && j<m){

        if( arr1[i] < arr2[j] ){
            arr3[k] = arr1[i];               // arr3[k++] = arr1[i++];     we can also write this reduce lines of code
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        } 
    }
    // copy arr1 remaining element 
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    // copy arr2 remaining element 
    while(j<m){
        arr3[k] = arr1[i];
        k++;
        j++;
    }

}

void print_merged_array(int arr3[], int n){
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
}


int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[4] = {2,4,6,8};
    int arr3[9];

    Merge_sorted_arrays( arr1, 5, arr2, 4, arr3);
    cout<<"The merged sorted array is: ";
    print_merged_array(arr3, 9);

}