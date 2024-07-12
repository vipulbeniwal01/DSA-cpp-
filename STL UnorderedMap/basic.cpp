#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["vipul"]=4;
    m["mohit"]=2;
    m["dhruv"]=3;
    m["vipul"]=1;
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}