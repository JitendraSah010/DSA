#include<iostream>
using namespace std;

// finding length
int find_length( char ch[] ){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

// reversing character array
void reverse(char ch[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap( ch[s], ch[e] );
        s++;
        e--;
    }
    cout<<"The reversed is: "<<ch;
}

// checking palindrome with considering case sensitive
// to lower case
char toLowerChar(char ch){
    if(ch >='A' && ch<='Z'){
        char temp = ch - 'A' + 'a';
        return temp;
    }else{
        return ch;
    }

}

bool check_palindrome(char ch[], int n){
    int s=0;
    int e=n-1;
    while( s<=e ){

        if( toLowerChar(ch[s]) == toLowerChar(ch[e]) ){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    char ch[20];
    cout<<"Enter characters: ";
    cin>>ch;
    // print array of character
    cout<<"The string is: "<<ch<<endl;
    // find character array length
    int n = find_length(ch);
    cout<<"length of string is: "<<n<<endl;
    // reverse character array
    reverse(ch,n);
    cout<<endl;
    // check palindrome
    bool isPalindrome = check_palindrome(ch, n);
    if(isPalindrome == 1){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not palindrome"<<endl;
    }


}