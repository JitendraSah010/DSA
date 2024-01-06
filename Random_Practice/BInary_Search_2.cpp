#include<iostream>
using namespace std;

int Binary_search(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid]> key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

// first and last occurance
int first_occurance(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e=mid-1;
        }
        else if( arr[mid]> key){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
// last occurance
int last_occurance(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s=mid+1;
        }
        else if( arr[mid]> key){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

// FINDING PIVOT ELEMENT
int pivot_element( int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while(s<e){
        if( arr[mid]>= arr[0] ){
            s = mid+1;
        }
        else{
            ans = mid;
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    // int size;
    // cout<<"Enter the size of array: ";
    // cin>>size;
    // // cout<<"Enter the sorted array elements: ";                               //Binary search 
    // cout<<"Enter the sorted array having duplicate elements: ";                 // 1sr & last occurance
    // int array[100];
    // for(int i=0; i<size; i++){
    //     cin>>array[i];
    // }

    /*
// BINARY SEARCH
    // Binary search
    int key;
    cout<<"Enter search key ";
    cin>>key;
    int Binary_Search_answer = Binary_search(array, size, key);
    cout<<"The element is present at index: "<<Binary_Search_answer;
    */

/*
// FIRST AND LAST OCCURNACE
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    int first_occ_ans = first_occurance(array, size, key);
    cout<<"The first occurance is: "<<first_occ_ans<<endl;
    // last occurance
    int last_occ_ans = last_occurance(array, size, key);
    cout<<"The first occurance is: "<<last_occ_ans<<endl;
*/

// FIND PIVOT ELEMENT
    int array[10] = {7,9,10,11,12,14,16,1,2,3};
    int pivot_answer = pivot_element(array, 10);
    cout<<"The pivot element is: "<<pivot_answer;

}