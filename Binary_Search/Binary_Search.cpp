#include<iostream>
using namespace std;

int Binary_even(int array[], int size, int key ){
    int start = 0;
    int end = size-1;
    int mid = start + ( end - start)/2;
    while(start <= end){
        if( array[mid]==key ){
            return mid;
        } 
        //Shift right for searching
        if(array[mid] < key ){
            start = mid+1;
        }
        //shift left
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[8] = {3,6,8,9,10,13,16,27};
    int odd[9] = {3,4,5,6,7,8,9,10,14};
    int evenIndex = Binary_even(even, 8, 10);
    cout<<"The element is at index "<<evenIndex;
}