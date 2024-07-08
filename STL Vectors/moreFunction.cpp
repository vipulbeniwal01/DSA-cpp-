#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.insert(v.begin(),100);
    cout<<v.front()<<endl;
    v.insert(v.end(),300);
    cout<<v.back()<<endl;
    v.insert(v.begin(),2,200);
    cout<<v.front()<<endl;
    v.erase(v.begin());
    cout<<v.front()<<endl;
    v.erase(v.begin());
    cout<<v.front()<<endl;
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.erase(v.begin(),v.end()-1);
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    if(v.empty()==true){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    v.resize(5);
    for(auto i: v){
        cout<<i<<" ";
    }
}