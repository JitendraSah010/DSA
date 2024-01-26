#include<iostream>
using namespace std;

// NOTE: check in question that, small & capital letter consider as same or not for a letter while checking for palindrome

int string_size(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0' ; i++ ){
        count++;
    }
    return count;
}

// checking palindrome of the string
bool check_palindrome(char str[], int n){
    int s=0;
    int e = n-1;
    while(s<=e){
        // ignoring special characters
        if ((str[s] < 'A' || str[s] > 'Z') && (str[s] < 'a' || str[s] > 'z') && (str[s] < '0' || str[s] > '9')) {
            s++;
        }
        if ((str[e] < 'A' || str[e] > 'Z') && (str[e] < 'a' || str[e] > 'z') && (str[e] < '0' || str[e] > '9')) {
            e--;
        }
        // ignoring special characters end

        if( tolower(str[s]) != tolower(str[e]) ){    
        // if( str[s] != str[e]){              //convert letter to lower case before compairing if letter cases don't matter in question
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

int main(){
    char str[20];
    cout<<"Enter string:";
    cin>>str;
    cout<<str<<endl;
    
    int n = string_size(str);
    bool isPalindrome = check_palindrome(str, n);

    if(isPalindrome){
        cout<<"String is palindrome ";
    }else{
        cout<<"String is not palidrone";
    }

}