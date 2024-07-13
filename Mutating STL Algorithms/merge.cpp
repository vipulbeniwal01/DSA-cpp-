#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(50);
    vector<int> v2;
    v2.push_back(20);
    v2.push_back(40);
    v2.push_back(60);
    vector<int> v3(6);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin()); //this is only implemented on sorted containers
    for(auto it : v3){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}