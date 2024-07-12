#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    // m.insert({10, 23}); //this works ki cpp-std 11 or later
    m[20]=40;
    m[10]=30;
    m.at(20)=43;
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    auto it = m.find(30);
    if(it==m.end()){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found"<<endl;
    }
    auto ti = m.lower_bound(10);
    if(ti!=m.end()){
        cout<<(*ti).second<<endl;
    }
    else{
        cout<<"No Lower Bound"<<endl;
    }
}