#include<iostream>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if( a[i] != b[i] ){
            return 0;
        }
    }
    return 1;
}

// string permutation
bool string_permutation(string s1, string s2){
    // count and mapping with index for s1
    int count1[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // count and mapping with index for s2;
    int count2[26] = { 0 };
    int i=0;
    int windowSize = s1.length();

    // creating first window;
    while( i< windowSize && i < s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    // check if first  permutation matched or not
    if( checkEqual(count1, count2) ){
        return 1;
    }

    // Create next window 
    while( i<s2.length() ){
        char newChar = s2[i];                       //add new character to window
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];             //delete old character
        index = oldChar - 'a';
        count2[index]--;

        i++;

        // check if  permutation matched or not
        if( checkEqual(count1, count2) ){
            return 1;
        }
    }
    return 0;
}


int main(){
    string s1;
    cout<<"Enter permutation string ";
    cin>>s1;

    string s2;
    cout<<"Enter string: ";
    cin>>s2;

    int answer = string_permutation(s1,s2);
    if(answer){
        cout<<"String is permutation ";
    }else{
        cout<<"String is not permutation";
    }
    
}