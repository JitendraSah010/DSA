#include<iostream>
#include<algorithm>
using namespace std;

    int intersection(int arr1[], int arr2[], int n, int m){

        int i=0, j=0;                            //two pointer approach
        while(i<n && j<m){
        if(arr1[i] == arr1[i+1] ){
            i++;
        }else{

            if( arr1[i] == arr2[j]){
                cout<<arr1[i]<<"  ";
                i++;
                j++;
            }
            else if( arr1[i]< arr2[j] ){
                i++;
            }else{
                j++;
            }
        }
    }
    }


int main(){

    // First array
    int n;
    cout<<"Enter the size of 1st array: ";
    cin>>n;
    cout<<"Enter the 1st array elements: ";
    int arr1[100];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }


    // second array
    int m;
    cout<<"Enter the size of 2nd array: ";
    cin>>m;
    cout<<"Enter the 2nd array elements: ";
    int arr2[100];

    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    intersection(arr1, arr2, n, m);



}