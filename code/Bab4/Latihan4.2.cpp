#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top = -1;
    int data;
    
    cout << "INPUT DATA\n";
    while(top < 9) {
        cout << "Masukkan data: ";
        cin >> data;
        
        if(data == 999) break;
        
        top++;
        S[top] = data;
        cout << "Data " << data << " ditambahkan\n";
    }
    
    if(top == 9) {
        cout << "Stack Penuh!\n";
    }
    
    cout << "\nKELUARKAN DATA\n";
    while(top > -1) {
        cout << "Data " << S[top] << " dikeluarkan\n";
        top--;
    }
    
    cout << "Stack Kosong!\n";
    
    return 0;
}
