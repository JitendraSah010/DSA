#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int array[], int n){
    cout<<"Printing start"<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<"  ";
    }
}    


int countOccurance( int array[], int n){
    // sorting the array
    sort( array, array+n );

    // printing sorted array
    cout<<"Printing sorted array"<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;

    // count the occurance
    int i = 0;
    while(i<n){
        int count = 1;
        int j = i+1;
        while(j<n){
            if(array[i] == array[j]){
                count++;
            }
            j++;
        }
        i = i+count;

        cout<<count<<"  ";
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

    countOccurance(number, size);
    // printArray(number, size);
}