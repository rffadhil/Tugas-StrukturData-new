#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {
    Node* baru = new Node{value, NULL};
    if (!head) {
        head = baru;
        head->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = baru;
        baru->next = head;
    }
}

void del() {
    if (!head) return;
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    Node* hapus = head;
    temp->next = head->next;
    head = head->next;
    delete hapus;
}

void traverse() {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    traverse();

    del();
    traverse();

    return 0;
}

