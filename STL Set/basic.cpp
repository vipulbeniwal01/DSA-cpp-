#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(4);
    s.insert(6);
    s.insert(2);
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    auto it = s.find(4);
    it++;
    s.erase(it);
    cout<<*it<<endl;
    s.clear();
    cout<<s.size()<<endl;
    set<int, greater<int> > q;
    q.insert(4);
    q.insert(6);
    q.insert(2);
    for(int x:q){
        cout<<x<<" ";
    }
    cout<<endl;
    int c = q.count(4);
    cout<<c<<endl;
    return 0;
}