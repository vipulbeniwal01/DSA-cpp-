#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;

struct MyCmp{
    bool operator()(pair<int,int>p1,pair<int,int>p2){
        if(p1.second==p2.second) return p1.first>p2.first;
        return p1.second<p2.second;
    }
};

void printmostfreq(int arr[], int n, int k){
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int> >, MyCmp> q(m.begin(),m.end());
    for(int i=0; i<k; i++){
        cout<<q.top().first<<" ";
        q.pop();
    }
}

int main(){
    int arr[] = {10,5,20,5,10,10,30};
    int k=2;
    printmostfreq(arr,7,k);
}