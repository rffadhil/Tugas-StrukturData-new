#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *left;
    Node *right;

    Node(char d) : data(d), left(nullptr), right(nullptr) {}
};

void preOrder(Node *root) {
    if (root == nullptr) return;
    cout << root->data << ' ';
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}

void postOrder(Node *root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << ' ';
}

int main() {

    Node *R = new Node('R');
    Node *A = new Node('A');
    Node *E = new Node('E');
    Node *S = new Node('S');
    Node *I = new Node('I');
    Node *T = new Node('T');

    R->left  = A;
    R->right = E;
    A->left  = S;
    S->left  = I;
    S->right = T;

    cout << "Tampilan secara PreOrder  : ";
    preOrder(R);
    cout << endl;

    cout << "Tampilan secara InOrder   : ";
    inOrder(R);
    cout << endl;

    cout << "Tampilan secara PostOrder : ";
    postOrder(R);
    cout << endl;

    return 0;
}
