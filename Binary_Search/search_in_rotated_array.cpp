#include<iostream>
using namespace std;

// Finding pivot element
int pivot_element(int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<e){
        // for first line
        if(arr[mid] > arr[0]){
            s=mid+1;
        }
        // for second line
        else{
            e=mid;
        }
        mid = s+ (e-s)/2;
    }
    return s;
}
// applying condition & Binary Search
int binary_search(int arr[], int s, int e, int key){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]< key){
            s=mid+1;
        }else{
            e = mid+1;
        }
        mid = s+ (e-s)/2;
    }
}
int searched_element(int arr[], int size, int pivot, int k){
    if( k>= arr[pivot] && k<= arr[size-1] ){
        return binary_search( arr, pivot, size-1, k );
    }
    else{
        return binary_search( arr, 0, pivot-1, k );
    }
}
int main(){
    int array[5] = {7,9,1,2,3};
    int pivot = pivot_element(array, 5);
    cout<<"The pivot element is at: "<<pivot<<endl;
    int searched = searched_element(array, 5, pivot, 2);
    cout<<"The searched value in rotated array is at index: "<<searched;
}