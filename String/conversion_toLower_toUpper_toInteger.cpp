#include<iostream>
using namespace std;
// to lower case
char toLowerCase(char ch){
    char temp = ch - 'A' + 'a';
    return temp;
}

// to upper case
char toUpperCase(char ch){
    char temp = ch - 'a' + 'A';
    return temp;
}

// int value character into integer value
int intoInteger(char ch){
    int temp = ch - '0';
    return temp;
}

int main(){
    char ch1;
    cout<<"Enter Capital letter: ";
    cin>>ch1;

    char ch2;
    cout<<"Enter small letter: ";
    cin>>ch2;

    char ch3;
    cout<<"Enter integer: ";
    cin>>ch3;

    char tolower = toLowerCase(ch1);
    cout<<ch1<<" into lowercase is: "<<tolower<<endl;

    char toUpper = toUpperCase(ch2);
    cout<<ch2<<" into Uppercase is: "<<toUpper<<endl;

    int toInteger = intoInteger(ch3);
    cout<<ch3<<" into integer is: "<<toInteger<<endl;

}