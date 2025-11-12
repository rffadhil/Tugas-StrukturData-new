#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top1 = -1;
    int top2 = 10;
    int data;
    
    cout << "Isi Stack2 (ketik -1 untuk berhenti):\n";
    while(top2 - top1 > 1) {
        cout << "Data: ";
        cin >> data;
        
        if(data == -1) break;
        
        top2--;
        S[top2] = data;
    }
    
    cout << "\nMENGAMBIL ISI STACK2\n";
    
    while(top2 < 10) {
        cout << "Data " << S[top2] << " dikeluarkan dari Stack2\n";
        top2++;
    }
    
    cout << "\nStack2 Kosong!\n";
    
    return 0;
}
