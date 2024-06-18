#include <iostream>
#include <list>
using namespace std;

struct MyHash {
    int bucket;
    list<int>* table; 

    MyHash(int b) {
        bucket = b;
        table = new list<int>[b];
    }

    void insert(int key){
        int i = key%bucket;
        table[i].push_back(key);
    }

    bool search(int key){
        int i = key%bucket;
        for(int a: table[i]){
            if(a==key)
            return true;
        }
        return false;
    }

    void remove(int key){
        int i=key%bucket;
        table[i].remove(key);
    }
    
};

int main() {
}