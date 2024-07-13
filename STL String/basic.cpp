#include<iostream>
using namespace std;
int main(){
    string str = "vipul";
    string str1 = "beniwal";
    cout<<str+str1<<endl;
    int res = str.find("p");
    if(res==string::npos){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at: "<<res<<endl;
    }
    return 0;
}