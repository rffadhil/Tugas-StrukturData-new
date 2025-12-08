#include <iostream>
using namespace std;

//Nama:Rafi Fadhil Amanullah
//NIM : 241011400893

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* newNode(char c) {
    Node* n = new Node;
    n->data = c;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* R = newNode('R');
    Node* A = newNode('A');
    Node* E = newNode('E');
    Node* S = newNode('S');
    Node* I = newNode('I');
    Node* T = newNode('T');

    R->left = A;
    R->right = E;

    A->left = S;

    S->left = I;
    S->right = T;

    cout << "Tampilan secara PreOrder : ";
    preOrder(R);
    cout << endl;

    cout << "Tampilan secara InOrder  : ";
    inOrder(R);
    cout << endl;

    cout << "Tampilan secara PostOrder: ";
    postOrder(R);
    cout << endl;

    return 0;
}

