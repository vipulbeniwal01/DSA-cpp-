#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);
    cout<<q.size()<<endl;
    while(q.empty()==false){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;

    priority_queue<int, vector<int>, greater<int> > w;
    w.push(10);
    w.push(6);
    w.push(9);
    w.push(12);
    w.push(15);
    while(w.empty()==false){
        cout<<w.top()<<" ";
        w.pop();
    }
    cout<<endl;

    int arr[] = {10,20,30,40};
    priority_queue<int> e(arr,arr+4);
    while(e.empty()==false){
        cout<<e.top()<<" ";
        e.pop();
    }
    cout<<endl;
    return 0;
}