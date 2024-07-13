#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    fill(v.begin()+1,v.end()-1,1);
    for(auto x: v){
        cout<<x<<" ";
    }
}