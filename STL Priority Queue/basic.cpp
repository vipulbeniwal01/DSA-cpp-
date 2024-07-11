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
    return 0;
}