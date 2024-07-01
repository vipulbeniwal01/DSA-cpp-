#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void IterativeInorder(Node* root) {
    stack<Node*> s;
    Node* curr = root;

    while (curr != nullptr || !s.empty()) {
        while (curr != nullptr) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
        cout << curr->data << " ";

        curr = curr->right;
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder traversal: ";
    IterativeInorder(root);
    cout << endl;

    return 0;
}