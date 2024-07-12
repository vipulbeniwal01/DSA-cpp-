#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    // m.insert({10, 23}); //this works ki cpp-std 11 or later
    m[20]=40;
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}