#include<iostream>
#include<vector>
using namespace std;

// --------APPROACH 1 (using temp variable)---------------------
// printing array
void printArray( int arr[], int n ){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// reverse the array
void reverse_array( int arr[], int n ){
    int size = n-1;

    int i=0;
    while( i < (size-i) ){
        int temp = arr[i];
        arr[i] = arr[size-i];
        arr[size-i] = temp;
        i++;
    }
    printArray(arr, n);
}


// --------APPROACH 2   two pointer  (using swap)---------------------

void reverse_array1(int arr[], int n){
    int s = 0;
    int e = n-1; 
    while( s<=e ){
        swap( arr[s], arr[e] );
        s++;
        e--;
    }
    printArray(arr, n);

}


// ------------------Using vector ---------------------
void printVectorArray( vector<int> arr ){
    int size = arr.size();
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

vector<int> reverse_vector_array(vector<int> v ){
    int n = v.size()-1;
    int s = 0;
    int e = n;
    while(s<=e){
        swap( v[s], v[e] );
        s++;
        e--;
    }
    return v;
}


int main(){
    /*
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int array[100];
    cout<<"Enter the array elements: ";

    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    // reverse_array( array, size);

    reverse_array1( array, size);
    */

   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);

    cout<<"vector before reversing "<<endl;
    printVectorArray(v);
    cout<<endl;

    vector<int> answer = reverse_vector_array(v);
    cout<<"vector after reverse ";
    printVectorArray(answer);

    return 0;
}