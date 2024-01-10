#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[4] = {1,2,3,4};

// STL ARRAY OPERATIONS
// (1) creae array
array<int,4> arr = {1,2,3,4};

// (2) size
int size = arr.size();
cout<<"The size of array is: "<<size<<endl;

// (3) Access by [ square bracket ]
for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

// (4) acess by index number .at()
cout<<"The element at index 2nd is "<< arr.at(2)<<endl;

// (5) empty or not check
cout<<"Empty or not: "<< arr.empty()<<endl;

// (6) acess 1st element
cout<<"array 1st element is "<< arr.front() <<endl;

// (7) acess last element 
cout<<"last element is: "<< arr.back();

}