#include<iostream>
using namespace std;

bool search( int array[], int size ){
    int n;
    cout<<"Enter the element: ";
    cin>>n;
    for(int i=0; i<size; i++ ){
        if( array[i] == n){
            return true;
        }
    }
    return false;
}

int main(){
    int number[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    bool isPresent = search(number, 10);
    if(isPresent == 1){
        cout<<"True";
    }else{
        cout<<"False";
    }
}