#include<iostream>
#include<algorithm>
using namespace std;
int pair_sum( int array[], int n, int s ){
// sorting the array
    sort(array, array+n);

    int i=0;
    int end = i+1;
        while( i<n && end<=n){
            if(i<n && end<n){
                if( array[i] + array[end] == s ){
                    cout<< array[i]<<"  "<< array[end]<<"  ";
                }
                end++;
            }
            else{
                i++;
                end = i+1;
            }
        }
}

int main(){

    int size, s;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the value to be match: ";
    cin>>s;

    cout<<"Enter the array elements: ";
    int number[100];

    for(int i=0; i<size; i++){
        cin>>number[i];
    }

    pair_sum(number, size, s);

}