#include<iostream>
using namespace std;

void print_merged_array(int arr3[], int n){
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
}

void merge_sorted_array_withoutCreateArray( int nums1[], int m, int nums2[], int n ){
    int i=m-1;
    int j = n-1;
    int k = m+n-1;

    while(i>=0 && j>=0){

            if( nums2[j]> nums1[i] ){
                nums1[k] = nums2[j];
                j--;
                k--;
            }else{
                nums1[k] = nums1[i];
                i--;
                k--;
            }
    }
    // copying remaining elements
    while(j>=0){
        nums1[k]  =  nums2[j];
        j--;
        k--;
    }

    print_merged_array(nums1, 6);
}

int main(){
    int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};

    merge_sorted_array_withoutCreateArray(nums1, 3, nums2, 3);

}