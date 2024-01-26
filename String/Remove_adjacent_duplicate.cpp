#include<iostream>
using namespace std;

string remove__all_adjacent_duplicate(string str){
    int i=0;
    int j=1;
    while(i< str.length() && j<str.length()){

        if(str[i] == str[j]){
            string temp = "";
            while( str[i] == str[j] ){
                temp.push_back( str[j] );
                cout<<str<<endl;
                j++;
            }
            str.erase( i, temp.length()+1 );
            if(i>0){
                i--;
            }
            j=i+1;

        }else{
            i++;
            j++;
        }
    }
    return str;
}

string remove_adjacent_duplicate(string str){
    int i=0;
    while(i<str.length() && (i+1)<str.length()){
        if(str[i] == str[i+1]){
            str.erase(i, 2);
            if(i>0){
                i--;
            }
        }else{
            i++;
        }
    }
    return str;
}


int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    // cout<<"Result is: "<<remove__all_adjacent_duplicate(str);
    cout<<"Result is: "<<remove_adjacent_duplicate(str);
}