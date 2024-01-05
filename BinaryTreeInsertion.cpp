#include <iostream>
using namespace std;
//inorder recursivly
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node* node) {
    if (node == NULL)
        return;

    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

int main() {
    Node* root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->right->right = new Node(7);
    root->left->left = new Node(5);
    root->left->right = new Node(4);

    // Perform in-order traversal starting from the root
    cout << "In-order traversal: ";
    inOrder(root);

    return 0;
}
