#include<iostream>
using namespace std;
// int Pivot_element(int arr[], int size){
//     int s = 0;
//     int e = size-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         // for second line
//         if(arr[mid]< arr[mid+1]){             // arr[mid] < arr[mid+1]  => for another pivot point i.e 9
//             s = mid+1;
//         }
//         //for first line
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return  s;
// }


int Pivot_element(int arr[], int size){
    int s=0;
    int e = size-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]> arr[0]){
            s = mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;

}

int main(){
    int array[6] ={7,9,10,1,2,3};
    int pivot = Pivot_element(array, 6);
    cout<<"The pivot element is: "<<pivot; 
}