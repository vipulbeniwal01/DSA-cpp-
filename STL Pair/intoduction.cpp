#include<utility>
#include<iostream>
using namespace std;
int main(){
    pair<int,int> p1(10,20);
    pair<int,string> p2(30,"Vipul Beniwal");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    return 0;
}