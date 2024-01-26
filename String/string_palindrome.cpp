#include<iostream>
#include<string>
using namespace std;


// removing faltu characters
bool valid(char ch){
    if( (ch>='a'&& ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
        return 1;
    }
    return 0;
}
// converting to lower case
char lower_case(char ch){
    if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9') ){
        return ch;
    }else{
        char temp = ch-'A' + 'a';
        return temp;
    }
}
// checking palindrome or not
bool Palindrome(string str){
    int s=0;
    int e= str.length()-1;
    while(s<=e){
        if(str[s] == str[e]){
            s++;
            e--;
        }else{
            return 0;
        }
    }
    return 1;
}

int main(){
    // Solution
    // step 1:   Remove faltu characters from string
    // step 2:   convert upper case into lowercase from new string
    // step 3:   check palindrome or not

    string str = "A man, a plan, a canal: Panama";

    // Remove faltu characters and then store into new string
    string temp = "";
    for(int i=0; i<str.length(); i++){
        if( valid(str[i]) ){
            temp.push_back(str[i]);
        }
    }

    // convert lowercase
    for(int i=0; i<temp.length(); i++){
        temp[i] = lower_case(temp[i]);
    }

    int answer = Palindrome(temp);
    if(answer){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }

}