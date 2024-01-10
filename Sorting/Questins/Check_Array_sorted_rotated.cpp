#include<iostream>
using namespace std;

int check_array_sorted_rotated(int arr[], int n){
    int count = 0;
    for( int i=1; i<n; i++ ){              //start from i=1 not i=0. 0th index is also checked below
        if( arr[i-1]> arr[i] ){
            count++;
        }
    }

    if( arr[n-1] > arr[0] ){
        count ++;
    }
    return count<=1;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int array[100];
    cout<<"Enter the array elements: ";

    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    int answer = check_array_sorted_rotated(array, size);

    cout<<answer;

}