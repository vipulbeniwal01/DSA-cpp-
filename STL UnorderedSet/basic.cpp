#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(8);
    s.insert(20);
    s.insert(5);
    s.insert(7);
    s.insert(17);
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
}