#include<iostream>
using namespace std;
// First occurance finding
int FirstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key ){
            e = mid - 1;
            ans = mid;
        }
        else if(key > arr[mid] ){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
// Last occurance finding
int LastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key ){
            s = mid + 1;
            ans = mid;
        }
        else if(key > arr[mid] ){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;  
    }
    return ans;

}
// // First occurance finding
// int FirstOcc(int arr[], int size, int key){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;
//     int ans = 0;
//     while(s <= e){
//         if(arr[mid] == key){
//             while(arr[mid] == key){
//                 ans = mid;
//                 mid = mid - 1;
//             }
//             return ans;
//         }
//         if (arr[mid] < key){
//             s = mid+1;
//         }
//         else{
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return -1;
// }
// // Last occurance finding
// int LastOcc(int arr[], int size, int key){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;
//     int ans = 0;
//     while(s <= e){
//         if(arr[mid] == key){
//             while(arr[mid] == key){
//                 ans = mid;
//                 mid = mid + 1;
//             }
//             return ans;
//         }
//         if (arr[mid] < key){
//             s = mid+1;
//         }
//         else{
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return -1;
// }
int main(){
    int array[4] = {1,3,3,5};
    int FirstOccurance = FirstOcc(array, 4, 3 );
    int LastOccurance = LastOcc(array, 4, 3);
    cout<<"The first occurance is at index: "<< FirstOccurance<<endl;
    cout<<"The last occurance is at index: "<< LastOccurance<<endl;
    
}
