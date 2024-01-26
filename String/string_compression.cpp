#include<iostream>
#include<vector>
using namespace std;

int char_size(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}

    void print(vector<char> ans){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
        }
    }



void string_compression(char ch[]){
    int i=0;
    int j=1;
    vector<char> ans;

    while( i<char_size(ch) && j<=char_size(ch) ){
        if( ch[i]== ch[j] ){
            int count = 1;
            while( ch[i] == ch[j] ){
                count++;
                j++;
            }
            ans.push_back(ch[i]);
            
            if(count >=10){
                int q = count/10;
                string str1 = to_string(q);
                char charValue1 = str1[0];
                ans.push_back(charValue1);

                int r = count%10;
                string str2 = to_string(r);
                char charValue2 = str2[0];
                ans.push_back(charValue2);

            }else{
                string str = to_string(count);    //converting integer into char
                char charValue = str[0];
                ans.push_back(charValue);
            }
            i = j;
            j = i+1;
        }
        else{
            ans.push_back( ch[i] );
            i++;
            j++;
        }
    }
    print(ans);
}

int main(){
    char ch[100];
    cout<<"Enter character: ";
    cin>>ch;
    if( char_size(ch) <=1 ){
        cout<<1;
    }else{
        string_compression(ch);
    }
}