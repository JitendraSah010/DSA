#include<iostream>
using namespace std;
int peakMountain(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]< arr[mid+1]){
            s = mid+1;
        }
        else if(arr[mid]> arr[mid+1]){
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int main(){
    int array[11] = {0,2,6,7,8,10,11,15,4,3,1};
    // int array[3] = {0,1,0};
    // int array[4] = {0,2,1,0};
    // int array[12] = {1,2,3,6,7,10,8,7,6,5,4};
    int peak_Mountain = peakMountain(array,11);
    cout<<"The peak element is at index: "<<peak_Mountain;
}