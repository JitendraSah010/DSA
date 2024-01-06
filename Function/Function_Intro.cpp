#include<iostream>
using namespace std;
// function -> reduce lines of code
//          -> makes code clean and readabe


// (1) Calculate the power of a
int power(){
    int a, b;
    cin>>a>>b;
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
// (2) Find number is odd or even
int isEven(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num%2==0){
        cout<<"Number is even";      
    }else{
        cout<<"Number is odd";
    }

}

// (3) function that doesnot return anything
void printCounting(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        cout<<i<<" ";
    }
}

int main (){
    printCounting();
    // int ans = power();
    // cout<<"Power is: "<<ans<<endl;
    // isEven();

}