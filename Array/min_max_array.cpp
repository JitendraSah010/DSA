#include<iostream>
using namespace std;

// getMax function
int getMax(int array[], int n){
    int max = INT32_MIN;
    for(int i=0; i<n; i++){
        // maxi = max(maxi, array[i]);          //predefined function to give max and min value
        if ( array[i]> max ){
            max = array[i];
        } 
    }
    return max;
}

// getMin function
int getMin(int array[], int n){
    int min = INT32_MAX;
    for(int i=0; i<n; i++){
        if ( array[i]< min ){
            min = array[i];
        } 
    }
    return min;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter array elements: ";

    int num[100];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    int maxValue = getMax(num, size);
    int minValue = getMin(num, size);
    cout<<"The maximum value is: "<<maxValue<<endl;
    cout<<"The minimum value is: "<<minValue<<endl;

    

}