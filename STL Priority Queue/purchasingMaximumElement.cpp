#include<iostream>
#include<queue>
using namespace std;

int maxEle(int arr[], int n, int sum){
    priority_queue<int,vector<int>,greater<int> > q(arr,arr+n);
    int ans = 0;
    while(q.empty()==false && sum>=q.top()){
        ans++;
        sum-=q.top();
        q.pop();
    }
    return ans;
}

int main(){
    int arr[]={20,10,5,530,100};
    int sum=35;
    int ans = maxEle(arr,5,sum);
    cout<<ans<<endl;
}