#include<iostream>
#include<vector>
using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap = c;
        arr = new int[c];
        top = -1;
    }
    void push(int a){
        top++;
        arr[top]=a;
    }
    int pop(){
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
};

/*
FOR DYNAMIC SIZE STACK WE USE VECTOR.

struct MyStack{
    vector<int> v;
    void push(int a){
        v.push_back(a);
    }
    int peek(){
        return v.back();
    }
    int pop(){
        peek();
        v.pop_back();
    }
    int size(){
        v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
};
*/

int main(){
    MyStack s(5);
    s.push(5);
    s.push(10);
    s.push(11);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}