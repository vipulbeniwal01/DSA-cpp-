#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(40);
    l.push_back(30);
    l.pop_front();
    for(int i: l){
        cout<<i<<" ";
    }
    auto it = l.begin();
    l.insert(it,20);
    for(int i: l){
        cout<<i<<" ";
    }
}