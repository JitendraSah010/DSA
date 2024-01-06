#include<iostream>
using namespace std;

// printing array
void printArray(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<"  ";
    }
}

// alternate swaping
int alternateSwap(int array[], int n){
    int start = 0;
    int end = 1;
    while(start<n){
        swap( array[start], array[end] );
        start = start+2;
        end = end+2;
    }
}

int Swap(int array[], int n){
    for(int i=0; i<n; i+=2){
        if( (i+1) < n){
            swap( array[i], array[i+1]);
        }
    }
}


int main(){
    int number[10] = {8,4,6,-4,7,5,2,10,20,40};
    printArray(number, 10); 
    cout<<endl;
    // alternateSwap(number, 11);
    Swap(number, 10);
    printArray(number, 10); 

}