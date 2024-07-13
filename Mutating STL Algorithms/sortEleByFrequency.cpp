#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

bool myComp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    return p1.second > p2.second;
}

int main(){
    int arr[]={10,5,20,10,10,5,20};
    unordered_map<int,int> m;
    for(int i=0; i<7; i++){
        m[arr[i]]++;
    }
    vector<pair<int,int> > v(m.begin(),m.end());
    sort(v.begin(),v.end(),myComp);
    int i=0;
    for(auto x: v){
        for(int j=0; j<x.second; j++){
            arr[i++]=x.first;
        }
    }
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}