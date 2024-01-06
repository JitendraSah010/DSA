#include<iostream>
using namespace std;

int update(int array[], int size){
    cout<<"Inside update"<<endl;

    // Updating the first element of array
    array[0]= 40;
    
    for(int i=0; i<size; i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int number[3]= {10,20,30};
    int size = 3;

    update(number, size);

    cout<<"Inside main"<<endl;
    for(int i=0; i<size; i++){
        cout<<number[i]<<"  ";
    }

}