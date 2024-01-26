#include<iostream>
using namespace std;

// find the unique element from the array (array size is odd i.e 2m+1 ) should have only one unique element and pair element )

//checking unique or not
int unique(int array[], int n){
    int ans = 0;
    for(int i=0; i<n; i++ ){
        ans = ans ^ array[i];
        cout<<ans<<" ";
    }
    return ans;
}

int main(){
    int number[7] = {4,2,3,4,2,3,1};
    int uniqueElement = unique(number, 7);
    cout<<endl;
    cout<<uniqueElement;
}