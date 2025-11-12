#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top1 = -1;
    int top2 = 10;
    int data;
    
    cout << "Isi Stack1 (ketik -1 untuk berhenti):\n";
    while(top2 - top1 > 1) {
        cout << "Data: ";
        cin >> data;
        
        if(data == -1) break;
        
        top1++;
        S[top1] = data;
    }
    
    cout << "\nMENGAMBIL ISI STACK1\n";
    
    while(top1 > -1) {
        cout << "Data " << S[top1] << " dikeluarkan dari Stack1\n";
        top1--;
    }
    
    cout << "\nStack1 Kosong!\n";
    
    return 0;
}
