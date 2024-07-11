#include<iostream>
#include<stack>
using namespace std;

void prevGreat(int arr[], int n){
    stack<int> s;
    s.push(arr[0]);
    for(int i=0; i<n; i++){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int ans = s.empty()?-1:s.top();
        cout<<ans<<" ";
        s.push(arr[i]);
    }
}

int main(){
    int arr[] = {15,10,18,12,4,6,2,8};
    prevGreat(arr, 8);
}