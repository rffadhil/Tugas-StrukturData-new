#include <iostream>
using namespace std;

int main() {
    int n = 10;
    
    cout << "CIRI CIRCULAR QUEUE\n\n";
    
    cout << "a. KOSONG\n";
    cout << "   Ciri: COUNTER = 0\n\n";
    
    cout << "b. PENUH\n";
    cout << "   Ciri: COUNTER = n\n";
    cout << "   (untuk n=10: COUNTER = 10)\n\n";
    
    cout << "c. BISA DIISI\n";
    cout << "   Ciri: COUNTER < n\n\n";
    
    cout << "d. ADA ISINYA\n";
    cout << "   Ciri: COUNTER > 0\n\n";
    
    cout << "e. HANYA BERISI 10 RECORD\n";
    cout << "   Ciri: COUNTER = 10\n\n";
    
    cout << "f. TEMPAT KOSONG HANYA 10\n";
    cout << "   Ciri: COUNTER = n - 10\n";
    cout << "   (misal n=20: COUNTER = 10)\n\n";
    
    return 0;
}
