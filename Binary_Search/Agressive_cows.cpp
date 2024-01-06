#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible( int stall[], int size, int cows, int mid ){
    int cowCount = 1;
    int lastPos = stall[0];                   // cowPosition or lastPos      it means putting 1st cow at 1st position i.e arr[i]

    for(int i=0; i<size; i++){

        if( stall[i]- lastPos >= mid ){
            cowCount++;
            if(cowCount == cows){
                return true;
            }
            lastPos = stall[i];
        }
    }
    return false;
}

int aggressive_cows(int stall[], int size, int cows){
    sort( stall, stall+size );               //sorting the stall position

    int s = 0;
    int maximum = -1;                        //maximun distance from array

    for(int i=0; i<size; i++){
        maximum = max(maximum, stall[i]);
    }
    int e = maximum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if( isPossible( stall, size, cows, mid ) ){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter the size of the cow stall(or array size): ";
    cin>>size;
    int array[100];
    cout<<"Enter the position of cow stalls ( Array elements ): ";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int k;
    cout<<"Enter the number of cows: ";
    cin>>k;

    int answer = aggressive_cows(array, size, k);
    cout<<"The maximum distance on which the cows can be separated are: "<<answer;

}