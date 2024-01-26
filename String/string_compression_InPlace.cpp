#include<iostream>
#include<vector>
using namespace std;

// ---------------------------Approach one---------------------------------
int char_size(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}
    void print(char ans[]){
        for(int i=0; i<char_size(ans); i++){
            cout<<ans[i];
        }
    }

void string_compression(char ch[]){
    int i=0;
    int j=1;

    while( i<char_size(ch) && j<=char_size(ch) ){
        if( ch[i]== ch[j] ){
            int count = 1;
            while( ch[i] == ch[j] ){
                count++;
                j++;
            }
            ch[i] = ch[i];
            
            if(count >=10){
                int q = count/10;
                string str1 = to_string(q);
                char charValue1 = str1[0];
                // ch[i+1] = ch[charValue1];
                ch[i+1] = charValue1;

                int r = count%10;
                string str2 = to_string(r);
                char charValue2 = str2[0];
                // ch[i+2] = ch[charValue2];
                ch[i+2] = charValue2;

            }else{
                string str = to_string(count);    //converting integer into char
                char charValue = str[0];
                // ch[i+1] = ch[charValue];
                ch[i+1] = charValue;
                
            }
            i = j;
            j = i+1;
        }
        else{
            // ch[i] = ch[i];
            ch[i] = ch[i];
            i++;
            j++;
        }
    }
    // print(ch);
    cout<<ch;
}

// ------------------------------------APPROACH 2 -------------------------------
int string_compression1(char ch[]){
    int i=0;
    int Ansindex = 0;
    int n = char_size(ch);
    while(i<n){
        int j = i+1;
        while(j<n && ch[i] == ch[j]){
            j++;
        }
        ch[Ansindex++] = ch[i];

        int count = j-1;
        if(count>1){
           string cnt = to_string(count);
            for(char s: cnt ){            //convert number into char
                ch[Ansindex++] = s;
            }
        }
        i = j;
    }
    return Ansindex;
}

int main(){
    // char ch[100];
    // cout<<"Enter character: ";
    // cin>>ch;
    // if( char_size(ch) <=1 ){
    //     cout<<1;
    // }else{
    //     string_compression(ch);
    // }

// ---------------------------------APPROACH 2 -----------------------------------
char ch[100];
cout<<"Enter string: ";
cin>>ch;
int ans = string_compression1(ch);
cout<<ans;



}