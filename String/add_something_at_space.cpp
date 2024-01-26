#include<iostream>
#include<string>
using namespace std;

string add_at_space(string str){
    string temp = "";
    for(int i=0; i<str.length() ;i++){
        if(str[i] == ' ' ){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

// without using extra space
string add_at_space_without_extra_memory(string str){
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            str[i] = '@';
            str.insert( i+1, "40" );
        }
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin, str);

    // cout<<add_at_space(str);
    cout<<add_at_space_without_extra_memory(str);      //don't pass str length from here otherwise wrong result

    return 0;
}