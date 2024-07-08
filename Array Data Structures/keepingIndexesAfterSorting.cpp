#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void keepingIndexes(int a[], int n){
    vector<pair<int, int> > v;
    for(int i=0; i<n; i++){
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){
    int a[] = {64,63,98,54,32};
    keepingIndexes(a,5);
}