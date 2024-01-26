#include<iostream>
using namespace std;

void find_string_size( char name[] ){
    int count = 0;
    for( int i=0; name[i] != '\0'; i++ ){
        count++;
    }
    cout<<"The size of string is "<<count;
}

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<name<<endl;

    find_string_size(name);

}