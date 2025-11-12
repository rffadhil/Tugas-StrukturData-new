#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top = -1;
    int n = 10;
    
    cout << "CIRI-CIRI KONDISI SINGLE STACK\n\n";
    
    cout << "a. KOSONG\n";
    cout << "   Ciri: top = -1\n\n";
    
    cout << "b. PENUH\n";
    cout << "   Ciri: top = n - 1\n";
    cout << "   Contoh: top = " << (n-1) << " (untuk n=10)\n\n";
    
    cout << "c. BISA DIISI\n";
    cout << "   Ciri: top < n - 1\n\n";
    
    cout << "d. ADA ISINYA\n";
    cout << "   Ciri: top > -1\n\n";
    
    cout << "=== DEMO ===\n";
    cout << "Kondisi awal: top = " << top << "\n";
    
    if(top == -1) {
        cout << "Status: KOSONG\n";
    }
    
    top++;
    S[top] = 100;
    cout << "\nSetelah push 1 data: top = " << top << "\n";
    if(top > -1) {
        cout << "Status: ADA ISINYA\n";
    }
    if(top < n-1) {
        cout << "Status: BISA DIISI\n";
    }
    
    return 0;
}
