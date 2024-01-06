#include<iostream>
#include<algorithm>
using namespace std;

// finding all duplicate elements
    int all_duplicate(int array[], int n){
        sort( array, array+n );
        
        int i=0;
        while(i<n-1){
            if( array[i] == array[i+1] ){
                cout<<array[i]<<"  ";
                i+=2;
            }
            else{
                i++;
            }
        }

        // for(int i=0; i<n; i++){
        //     int element = array[i];

        //     int j=i+1;
        //     while(j<n){
        //         if( element == array[j]){
        //             cout<<element<<"  ";
        //             j++;
        //             break;
        //         }
        //         j++;
        //     }
        // }



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
    all_duplicate(number, size);
}
