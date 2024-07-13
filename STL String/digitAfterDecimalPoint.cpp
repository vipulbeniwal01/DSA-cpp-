#include<iostream>
using namespace std;

void digitAfterDecimal(string str){
    for(int i=str.find(".")+1; i<str.length(); i++){
        cout<<str[i];
    }
    cout<<endl;
}

int main(){
    string str = "55.123";
    digitAfterDecimal(str);
}