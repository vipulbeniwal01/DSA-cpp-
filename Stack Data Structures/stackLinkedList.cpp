#include <iostream>
#include <climits> // Include this for INT_MAX
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int a) : data(a), next(NULL) {}
};

struct MyStack {
    Node *head;
    int sz;

    MyStack() : head(NULL), sz(0) {}

    void push(int a) {
        Node *temp = new Node(a);
        temp->next = head;
        head = temp;
        sz++;
    }

    int size() {
        return sz;
    }

    int pop() {
        if (head == NULL) return INT_MAX;
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        sz--;
        return res;
    }

    int peek() {
        if (head == NULL) return INT_MAX; // Add this check
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main() {
    MyStack s;
    s.push(5);
    s.push(10);
    s.push(11);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}