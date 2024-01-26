#include<iostream>
using namespace std;

char Get_Max_Occurance_character( string str, int n ){
    int arr[26] = {0} ;
    // storing no. of count of a char into array
    for(int i=0; i<n;i++){
        char ch = str[i];
        int number = 0;

        if(ch>='a' && ch<='z'){          //if char is in lowercase
            number = ch - 'a';
        }else{
            number = ch- 'A';           // if char is in uppercase
        }
        arr[number]++;
    }
    // finding maximum char count
    int maxi = -1;
    int ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i] ){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = ans + 'a';
    return finalAns;
}

int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    int n = str.length();
    char answer = Get_Max_Occurance_character(str, n);
    cout<<"Maximum occurance of character is: "<<answer;
}