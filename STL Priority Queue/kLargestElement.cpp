#include <iostream>
#include<queue>
using namespace std;

void klarge(int arr[], int n, int k){
    priority_queue<int,vector<int>,greater<int> > q(arr,arr+k);
    for(int i=k; i<n; i++){
        if(arr[i]>q.top()){
            q.pop();
            q.push(arr[i]);
        }
    }
    while(q.empty()==false){
        cout<<q.top()<<" ";
        q.pop();
    }
}

int main(){
    int arr[]={5,15,10,20,8,25,30};
    klarge(arr,7,3);
}