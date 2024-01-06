#include<iostream>
using namespace std;
// finding first occurance
int first_occ(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int  mid = s + (e-s)/2;
    int First_ans = -1;
    while(s<=e){
        if(arr[mid] > key){
            e = mid-1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{                          //if(arr[mid]==key)
            e = mid-1;
            First_ans = mid;
        }
        mid = s+(e-s)/2;
    }
    return First_ans;
}
// finding last occurance
int last_occ(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int  mid = s + (e-s)/2;
    int Last_ans = -1;
    while(s<=e){
        if(arr[mid] > key){
            e = mid-1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{                          //if(arr[mid]==key)
            s = mid+1;
            Last_ans = mid;
        }
        mid = s+(e-s)/2;
    }
    return Last_ans;
}

int main(){
    int array[8] = {1,2,3,4,5,6,6,6};
    int first =  first_occ(array, 8, 6);
    int last =  last_occ(array, 8, 6);
    cout<<"The first occurance is at index "<<first<<endl;
    cout<<"The last occurance is at index "<<last<<endl;
}