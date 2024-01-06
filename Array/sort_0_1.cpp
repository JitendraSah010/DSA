#include<iostream>
using namespace std;

// sort 0 1 problem
int sort(int array[], int n){
    int i=0;
    int j = (n-1)-i;
    while(i<j){
        if(array[i] == 0){
            i++;
        }
        if(array[j] == 1){
            j--;
        }
        if(array[i] == 1 && array[j]==0 ){
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }
}
void printingArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<"  ";
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

    sort(number, size);
    printingArray(number, size);

}
