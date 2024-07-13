#include<iostream>
using namespace std;

void patsearch(string str){
    int pos = str.find("geeks");
    while(pos!=string::npos){
        cout<<pos<<" ";
        pos = str.find("geeks",pos+1);
    }
}

int main(){
    string str = "geeksforgeeks";
    patsearch(str);
    return 0;
}