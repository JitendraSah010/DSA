#include<iostream>
#include<string>
using namespace std;

/*
string  => array of characters
        => it 1-D characters array
        => it consider enter,tab, space, new line
*/


int main(){
    // char name[20];
    // cout<<"Enter your name:";                   //it consider space, tab, new line, enter and store null character.
    // cin>>name;                                  //string terminated after null character \0.
    
    // // add null character '\0 to stop
    // name[3] = '\0';

    // cout<<"Your name is: "<<name;


// TO STORE WHOLE LINE IN CHAR ARRAY
    // char ch[20];
    // cout<<"Enter char: ";
    // cin.getline(ch,20);                            // cin stop execution after tan,space,enter,etc so, to store line use cin.getline
    // cout<<"The string line is"<<ch;


// TO STORE WHOLE LINE IN STRING
    string str;
    cout<<"Enter string: ";
    getline(cin, str);
    cout<<str;

}