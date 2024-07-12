#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(10);
    v1.push_back(4);
    v1.push_back(5);
    if(is_permutation(v1.begin(),v1.end(),v.begin())){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}