#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if( arr[mid]> key){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int array[10] = {0,3,4,6,8,10,15,20,23,24};
    int index = binary_search(array, 10, 15);
    cout<<"The element is present at index "<<index;
}