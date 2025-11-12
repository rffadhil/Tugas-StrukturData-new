#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top = -1;
    int data;
    
    cout << "Isi stack dulu (ketik -1 untuk berhenti):\n";
    while(top < 9) {
        cout << "Data: ";
        cin >> data;
        
        if(data == -1) break;
        
        top++;
        S[top] = data;
    }
    
    cout << "\nPOP DATA DARI STACK\n";
    
    while(top > -1) {
        cout << "Data " << S[top] << " dikeluarkan (top = " << top << ")\n";
        top--;
    }
    
    cout << "\nStack Kosong!\n";
    
    return 0;
}
