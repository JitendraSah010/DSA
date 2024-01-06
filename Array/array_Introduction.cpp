#include<iostream>
using namespace std;

    void printingArray( int array[], int size){
        cout<<"Printing the array"<<endl;
        for(int i=0; i<size; i++ ){
            cout<<array[i]<<"  ";
        }
        cout<<endl;
        cout<<"Printing DONE"<<endl;
    }

int main(){

    // declare array and initalise it with some specific value
    /*
    int array[5];
    for(int i=0; i<=4; i++){
        array[i] = 10;
    }
    for(int i=0; i<=4; i++){
        cout<<array[i]<<"  ";
    }
    */

//   initalising and printing the array 
    cout<<endl;
    int number[15] = {2, 7,10};
    printingArray(number, 15);
    cout<<endl;

    cout<<"The size of array is: "<<sizeof(number)<<endl;       //=> print 60 because int is of 4 byte so. 15*4
    int size = sizeof(number)/ sizeof(int);
    cout<<"The size of number array is: "<<size<<endl;

// try to initalise the array with 1 by above initalisation method
//       => not possible with below line. you have to use another method i.e using loop insert element
    int first[10] = {1};
    printingArray(first, 10);

}