#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr1){
    for(int i=0; i<  arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
}

// reversing the answer
vector<int> reverse( vector<int> arr3 ){
    int s=0;
    int e= arr3.size()-1;
    while(s<=e){
        swap( arr3[s], arr3[e] );
        s++;
        e--;
    }
    return arr3;
}

void add_two_array(int arr1[], int m, int arr2[], int n){

    int i=m-1;
    int j=n-1;
    int carry = 0;

    vector<int> arr3;                //new array to store result;

    // CASE 1 (both array same size)
    while(i>=0 && j>=0){

        int a = arr1[i];
        int b = arr2[j];
        int ans = a + b + carry;
        int sum = ans%10;
        carry = ans/10;
        arr3.push_back(sum);
        i--;
        j--;
    }

    // CASE 2 (1st array is large than 2nd)
    while(i>=0){
        int ans = arr1[i] + carry;
        int sum = ans%10;
        carry = ans/10;
        i--;
        arr3.push_back(sum);
    }

    // CASE 3 (2nd array is large)
    while(j>=0){
        int ans = arr2[j] + carry;
        int sum = ans%10;
        carry = ans/10;
        j--;
        arr3.push_back(sum);
    }

    // CASE 4 (when carry still remains)
    while( carry !=0){
        int ans = carry;
        carry = ans/10;
        int sum = ans%10;
        arr3.push_back(sum);
    }

    // reverse array
    vector<int> result = reverse(arr3);

    printArray(result);

}


int main(){
    // input 1st array
    int m;
    cout<<"Enter size of first array: ";
    cin>>m;
    int arr1[100];
    cout<<"Enter 1st array elements: ";
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }

    // input 2nd array
    int n;
    cout<<"Enter size of 2nd array: ";
    cin>>n;
    int arr2[100];
    cout<<"Enter 2nd array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }

    add_two_array(arr1, m, arr2, n);

}