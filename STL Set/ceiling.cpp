#include<iostream>
#include<set>
using namespace std;

void ceiling(int arr[], int n){
    set<int> s;
    int res[n];
    for(int i=n-1; i>=0; i--){
        auto it = s.lower_bound(arr[i]);
        if(it == s.end()){
            res[i]=-1;
        }
        else{
            res[i]=*it;
        }
        s.insert(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
}

int main(){
    int arr[] = {10,100,200,30,120,120};
    ceiling(arr, 6);
    return 0;
}