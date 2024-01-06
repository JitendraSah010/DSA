#include<iostream>
using namespace std;

// Buy stock and sell stock for maximum profit problem
int Buy_Sell_Stock(int array[], int n){
// Buying the stock at minimum price 
    int min = INT32_MAX;
    int day = 1;
    int i = 0;
    while(i<n){
        if ( array[i]< min ){
            min = array[i];
            day = i+1;
        } 
        i++;
    }
    cout<<"The stock should buy on day "<< day << " at price "<<min<<endl;

// selling the stock with maximum profit
    int max = INT32_MIN;
    int sell_day = 1;
    int j = day-1;
    while(j<n){
        if ( array[j]> max ){
            max = array[j];
            sell_day = j+1;
        } 
        j++;
    }
    cout<<"The stock should sell on day "<< sell_day << " at price "<<max;
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

    Buy_Sell_Stock(number, size);
}
