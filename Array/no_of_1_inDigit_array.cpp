#include<iostream>
using namespace std;

// sort 0 1 problem
// int bits(int array[], int n){
//     int i=0;
//     while(i<n){
//         int count = 0;
//         int j = array[i];
//         while( j>0){
//             int bit = j&1;
//             // cout<<" bit is "<<bit<<endl;
//             if(bit == 1){
//                 count++;
//             }
//             j = j>>1;
//         }
//         cout<<count<<"  ";
//         i++;
//     }
// }
int bits(int n){
    int i=0;
    while(i<=n){
        int count = 0;
        int j = i;
        while( j>0){
            int bit = j&1;
            if(bit == 1){
                count++;
            }
            j = j>>1;
        }
        cout<<count<<"  ";
        i++;
    }
}


int main(){
    int size;
    cout<<"Enter any number: ";
    cin>>size;

    bits(size);
    // printingArray(number, size);

}
