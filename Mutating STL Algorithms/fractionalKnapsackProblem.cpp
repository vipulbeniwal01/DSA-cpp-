#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool MyComp(pair<int,int>p1,pair<int,int>p2){
    double r1 = (double)p1.first/p1.second;
    double r2 = (double)p2.first/p2.second;
    return r1>r2;
}

int fracKnapd(vector<pair<int,int> > &p, int k){
    sort(p.begin(),p.end(),MyComp);
    int res = 0;
    for(int i=0; i<p.size(); i++){
        if(p[i].second<=k){
            res+=p[i].first;
            k-=p[i].second;
        }
        else{
            res+=p[i].first*k/p[i].second;
        }
    }
    return res;
}

int main(){
    vector<pair<int,int> > p;
    p.push_back(make_pair(600,50));
    p.push_back(make_pair(500,20));
    p.push_back(make_pair(400,30));
    int k=70;
    int ans = fracKnapd(p,k);
    cout<<ans<<endl;
}