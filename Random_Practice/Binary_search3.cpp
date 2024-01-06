#include<iostream>
#include<algorithm>
using namespace std;

    // Printing sorted array
    void printArray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
/*
// Binary search
int binary_search(int arr[], int n, int k){
    sort(arr, arr+n);
    printArray(arr,n);
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }

}
*/

/*
// FIRST OCCURANCE
int first_occ(int arr[], int n, int k){
    sort(arr,arr+n);
    printArray(arr, n);

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
// LAST OCCURANCE
int last_occ(int arr[], int n, int k){
    sort(arr,arr+n);

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
*/

int pivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]> arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e , int k){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid]> k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
}

int searching(int arr[], int n, int pivot, int k){
    if( k>= arr[pivot] && k<=arr[n-1] ){
        return binarySearch(arr, pivot, n-1, k);
    }else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[100];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    // int Answer = binary_search(array, size, key);
    // cout<<"The searched element is: "<<Answer;

    // int first_occurance =  first_occ(array, size, key);
    // cout<<"The first occurrance is: "<<first_occurance<<endl;

    // int last_occurance =  last_occ(array, size, key);
    // cout<<"The first occurrance is: "<<last_occurance;

    int pivot_index = pivot(array, size);
    cout<<"The pivot element is: "<<pivot_index;

    int keyIndex = searching(array, size, pivot_index, key);
    cout<<"The element is at index: "<<keyIndex;

}