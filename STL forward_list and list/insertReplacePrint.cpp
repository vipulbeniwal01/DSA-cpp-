#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

list<int> l;

void insert(int n){
    l.push_back(n);
}
void print(){
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;
}
void replace(int n, vector<int> &seq){
    auto it = find(l.begin(),l.end(), n);
    if(it==l.end()){
        return;
    }
    it=l.erase(it);
    l.insert(it, seq.begin(), seq.end());
    seq.front() = 100;
}

int main(){
    insert(3);
    insert(10);
    insert(2);
    insert(10);
    print();
    vector<int> seq;
    seq.push_back(10);
    seq.push_back(20);
    replace(10,seq);
    print();
    cout<<seq.front()<<endl; //here ampersend which is present in fucntion comes in role.
    return 0;
}