#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x) {
    Node* baru = new Node{x, NULL};
    if (!rear) {
        front = rear = baru;
    } else {
        rear->next = baru;
        rear = baru;
    }
    cout << "Masuk antrian: " << x << endl;
}

void dequeue() {
    if (!front) return;
    Node* temp = front;
    cout << "Keluar antrian: " << temp->data << endl;
    front = front->next;
    if (!front) rear = NULL;
    delete temp;
}

void tampil() {
    Node* temp = front;
    cout << "Antrian: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    tampil();

    dequeue();
    tampil();

    return 0;
}

