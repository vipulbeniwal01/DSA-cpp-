#include<iostream>
#include<list>
using namespace std;

int josephus(int n, int k){
    list<int> l;
    for(int i=0; i<n; i++){
        l.push_back(i);
    }
    auto it = l.begin();
    while(n!=1){
        for(int i=1; i<k; i++){
            it++;
            if(it==l.end()){
                it=l.begin();
            }
        }
        it = l.erase(it);
        if(it==l.end()){
            it=l.begin();
        }
        n--;
    }
    return *l.begin();
}

int main(){
    int n, k;
    cin>>n>>k;
    int ans = josephus(n,k);
    cout<<ans<<endl;
}