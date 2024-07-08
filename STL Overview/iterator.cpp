#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator i = v.begin();
    
    cout << *i << endl;  // Output: 10
    
    i++;
    cout << *i << endl;  // Output: 20
    
    i--;
    cout << *i << endl;  // Output: 10
    
    i = next(i, 2);
    cout << *i << endl;  // Output: 30
    
    i = prev(i);
    cout << *i << endl;  // Output: 20

    return 0;
}