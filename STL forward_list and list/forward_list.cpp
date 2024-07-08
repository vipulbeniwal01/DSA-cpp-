#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> f;
    f.push_front(10);
    f.push_front(20);
    f.push_front(30);
    f.pop_front();
    for(int i: f){
        cout<<i<<" ";
    }
    cout<<endl;
    f.remove(20); //f.assign({1,2,3,4}) used to assign values to forward list
    for(int i: f){
        cout<<i<<" ";
    }
}

//forward_list behaves like singly linked list where as list behaves as doubly linked list