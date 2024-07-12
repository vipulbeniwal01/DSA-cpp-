#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    auto it = upper_bound(v.begin(),v.end(),3);
    cout<<*it<<endl;
    auto iti = upper_bound(v.begin(),v.end(),2);
    cout<<*iti<<endl;
    //we can find out the number of occurences of any number using upperbound and lowerbound by simply subtracting both
}