#include<iostream>
using namespace std;

// printing array
int sum_of_Array(int array[], int size){
    int sum = 0;

    for(int i=0; i<size; i++){
        sum = sum+ array[i];
    }
    cout<<"The sum of first " << size <<" elements of array is: "<<sum<<endl;
}


int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of array: ";

    int array[100];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    sum_of_Array(array, size);

}