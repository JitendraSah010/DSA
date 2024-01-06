#include<iostream>
using namespace std;

// ------------------------------------ method (1) => division ---------------------------------
int multiple(int array[], int n){
    int i=0;
    int ans =1;
    while(i<n){
        for(int j=0; j<n; j++){
            if(array[i]==0 && array[j]==0){
                ans = ans * 1;
            }else{
                ans = ans * array[j];
            }
        }
        if(array[i]==0){
            cout<<ans<<"  ";
        }else{
            cout<<ans/array[i]<<"  ";
        }
        i++;
        ans =1;
    }
}
// -------------------------------------------- Method (2) --------------------------------


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

    multiple(number, size);
    // printingArray(number, size);

}
