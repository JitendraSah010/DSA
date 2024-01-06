#include<iostream>
using namespace std;

int reverse(int array[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap( array[start], array[end]);
        start++;
        end--;
    }
}

int main(){
    int number[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    reverse(number, 10);

    for(int i=0; i<10; i++){
        cout<<number[i]<<" "<<endl;
    }

}