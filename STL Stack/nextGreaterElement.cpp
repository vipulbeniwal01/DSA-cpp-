#include<iostream>
#include<stack>
using namespace std;

void nextGreater(int arr[], int n){
    stack<int> s;
    s.push(arr[n-1]);
    for(int i=n-1; i>=0; i--){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int nexgreat = s.empty()?-1:s.top();
        cout<<nexgreat<<" ";
        s.push(arr[i]);
    }
}

int main(){
    int arr[] = {5,15,10,8,6,12,9,18};
    nextGreater(arr, 8);
}