#include<iostream>
#include<string>
using namespace std;

string reverse_sentence(string str, int n){
    string answer = "";
    int i=0;
    while(i<n){
        string temp ="";
        while( str[i] == ' ' && i<n ){
            i++;
        }
        while( str[i] != ' ' && i<n ){
            temp += str[i];  
            // temp = str[i]+temp;              //==>output: sentence and word both revered
            i++;
        }
        if( temp.length()>0 ){
            if(answer.length()==0){
                answer = temp;
            }else{
                answer = temp + " " + answer;
                // answer = answer + " " + temp;       //if want to reverse only words of sentence not reverse sentence then
            }
        }
    }
    return answer;
}

int main(){
    string str = "    Hello World!     ";
    int n= str.length();
    cout<<"The reversed sentence is: "<<reverse_sentence(str, n);

}