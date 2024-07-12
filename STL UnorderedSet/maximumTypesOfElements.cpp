#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[]={1,1,2,1,3,1};
    int n=6;
    int k=2;
    unordered_set<int> s;
    int a=n/k;
    for(int i=0; i<n; i++){
        if(s.size()<a){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
        }
        }
    }
    cout<<s.size()<<endl;
}