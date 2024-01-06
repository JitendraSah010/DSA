#include<iostream>
using namespace std;

void printingArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
}

// Checking IsPOssible
bool isPossible(int arr[], int size, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<size; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if( studentCount > m || arr[i] > mid ){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int binary_search(int arr[], int size, int m){
    if(m>size){
        return -1;
    }

    int s = 0;
    int sum = 0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        cout<<mid<<"  ";
        if( isPossible(arr, size, m, mid) ){
            ans = mid;
            e=mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[100];
    cout<<"Enter array elements: ";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int m;
    cout<<"Enter the number of students";
    cin>>m;

    // printingArray(array, size);
    int answer = binary_search( array, size, m);
    cout<<"The mid value is and required minimum value is: "<<answer;
}