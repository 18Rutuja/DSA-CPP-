#include <iostream>
using namespace std;
//postorder recursively
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

void postOrder(Node* node) {
    if (node == NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
     cout << node->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->right->right = new Node(7);
    root->left->left = new Node(5);
    root->left->right = new Node(4);

    // Perform in-order traversal starting from the root
    cout << "Postorder traversal: ";
    postOrder(root);

    return 0;
}
