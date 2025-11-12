#include <iostream>
using namespace std;

int main() {
    int n = 100;
    
    cout << "CIRI LINEAR QUEUE\n\n";
    
    cout << "a. KOSONG (tak ada isinya)\n";
    cout << "   Ciri: F = R + 1\n\n";
    
    cout << "b. PENUH (tak bisa diisi)\n";
    cout << "   Ciri: R = n - 1\n";
    cout << "   (untuk n=100: R = 99)\n\n";
    
    cout << "c. BISA DIISI\n";
    cout << "   Ciri: R < n - 1\n\n";
    
    cout << "d. ADA ISINYA\n";
    cout << "   Ciri: F < R + 1\n\n";
    
    cout << "e. PENUH tapi belum ada yang keluar\n";
    cout << "   Ciri: F = 0 DAN R = n - 1\n\n";
    
    cout << "f. PERLU DIRESET\n";
    cout << "   Ciri: F = R + 1 DAN R = n - 1\n\n";
    
    return 0;
}
