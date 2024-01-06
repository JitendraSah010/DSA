#include<iostream>
using namespace std;

// sort 0 1 2 problem
int sort(int array[], int n){
    int i=0;
    int j=n-1;
    int mid = 0;
    while(mid<=j){
        if(array[i]==0 && array[mid]==0){
            i++;
            mid++;
        }
        if(array[j]==2){
            j--;
        }

        if(array[mid] == 0){
            swap( array[mid], array[i]);
            i++;
            mid++;
        }
        else if(array[mid] == 1){
            mid++;
        }
        else{
            swap( array[mid], array[j] );
            j--;
        }
    }
}
void printingArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<"  ";
    }
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the array elements: ";
    int number[100];

    for(int i=0; i<size; i++){
        cin>>number[i];
    }
    sort(number, size);
    printingArray(number, size);
}
