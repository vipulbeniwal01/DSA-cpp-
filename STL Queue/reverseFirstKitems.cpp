#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q, int n){
    stack<int> s;
    for(int i=0; i<n; i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0; i<n; i++){
        q.push(s.top());
        s.pop();
    }
    for(int i=n; i<q.size(); i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse(q, 3);
    for(int i=0; i<5; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}