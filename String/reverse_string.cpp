#include<iostream>
using namespace std;

int find_string_size( char name[] ){
    int count = 0;
    for( int i=0; name[i] != '\0'; i++ ){
        count++;
    }
    return count;
}

void reverse_string( char name[], int n ){
    int s=0;
    int e = n-1;
    while( s<=e ){
        swap( name[s], name[e] );
        s++;
        e--;
    }
    cout<<"The reverse of string is "<<name;
}

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<name<<endl;

    int n = find_string_size(name);

    reverse_string( name, n );
}