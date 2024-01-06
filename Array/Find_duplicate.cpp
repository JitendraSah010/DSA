#include<iostream>
#include<algorithm>
using namespace std;

// printing array element
void printArray(int array[], int n){
    cout<<"Printing start"<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<"  ";
    }
} 

// finding dublicate element from array
int duplicate(int array[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^(array[i]);
    }
    cout<<endl;
    for(int i=1; i<n; i++){
        ans = ans ^ i;
    }
    cout<<endl;
    cout<<"The duplicate element in the array is: "<<ans;
}

// finding duplicate element by sorting approach
int sort_Approach(int array[], int n){
    sort( array, array+n);
    
    int i = 0;
    while(i<n){
        if(array[i] == array[i+1] ){
            cout<<"The duplicate element is: "<<array[i];
        }
        i++;
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
    // printArray(number, size);
    // duplicate(number, size);

    // next approach to solve this question
    sort_Approach(number, size);

}