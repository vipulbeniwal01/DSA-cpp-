#include<iostream>
using namespace std;

char extraChar(string str, string str1){
    char res;
    for(int i=0; i<str.length(); i++){
        res = res^str[i]^str1[i];
    }
    res = res^str1[str.length()];
    return res;
}

int main(){
    string str = "aabcbc";
    string str1 = "abbccba";
    cout<<extraChar(str,str1)<<endl;
}