#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {2,4,6,3,6,9};
    priority_queue<int,vector<int>,greater<int> > q(arr, arr+6);
    while(q.empty()==false){
        cout<<q.top()<<" ";
        q.pop();
    }
}