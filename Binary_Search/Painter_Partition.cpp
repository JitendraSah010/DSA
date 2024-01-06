#include<iostream>
using namespace std;

bool isPossible( int boards[], int n, int mid, int k  ){
    int painters = 1;
    int boardPartSum = 0;
    for(int i=0; i<n; i++){

        if(boardPartSum + boards[i] <= mid ){
        boardPartSum += boards[i];
        }
        else{
            painters++;
            if( painters > k   ||   boards[i]> mid ){
                return false;
            }
            boardPartSum = boards[i];
        }
    }
    return true;

}


int binary_search(int boards[], int n, int k)
{
    if(k>n){
        return -1;
    }
    int s=0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if (isPossible( boards, n, mid, k )){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[100];
    cout<<"Enter array elements: ";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int m;
    cout<<"Enter the number of painters: ";
    cin>>m;

    int answer = binary_search( array, size, m);
    cout<<"The mid value is and required minimum time is: "<<answer;
}