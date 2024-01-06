#include<iostream>
using namespace std;

// Finding pivot
int pivot(int arr[], int size){
    int s=0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(arr[mid]>arr[0]){
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
// binary search on condition
int binary_search(int arr[], int size, int pivot, int key){
    int s = 0;
    int e = pivot-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            return ans;
        }
        else if(arr[mid]> key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int binary_search1(int arr[], int size, int pivot, int key){
    int s = pivot;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            return ans;
        }
        else if(arr[mid]> key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}


int condition(int arr[], int size, int pivot, int key){
    if( key >= arr[pivot] && key >= arr[0] ){
        cout<<"The element is present at index: "<< binary_search(arr, size, pivot, key);
    }
    else{
        cout<<"The element is present at index: "<< binary_search1(arr, size, pivot, key);
    }
}

int main(){
    int array[8] = {7,9,10,11,12,1,2,3};
    int pivot_element = pivot(array,8);
    cout<<"The pivot element is: "<<pivot_element<<endl;
    int key;
    cout<<"Enter key to be searched ";
    cin>>key;
    int isPresent = condition(array, 8, pivot_element, key);
}