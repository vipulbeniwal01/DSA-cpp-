#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    auto it = d.begin();
    it++;
    d.insert(it,44);
    for(auto x: d){
        cout<<x<<" ";
    }
    cout<<endl;
}