#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int x) {
    return new Node{x, NULL, NULL};
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);

    cout << "Inorder   : "; inorder(root);
    cout << "\nPreorder  : "; preorder(root);
    cout << "\nPostorder : "; postorder(root);

    return 0;
}

