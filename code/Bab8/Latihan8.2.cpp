#include <iostream>
using namespace std;

int main() {
    int n = 10;
    
    cout << "CIRI DOUBLE ENDED QUEUE\n\n";
    
    cout << "a. KOSONG (tidak ada isinya)\n";
    cout << "   Ciri: L = R + 1\n\n";
    
    cout << "b. PENUH KANAN (tak bisa diisi dari kanan)\n";
    cout << "   Ciri: R = n - 1\n\n";
    
    cout << "c. PENUH KIRI (tak bisa diisi dari kiri)\n";
    cout << "   Ciri: L = 0\n\n";
    
    cout << "d. PENUH TOTAL (tak bisa diisi dari kiri maupun kanan)\n";
    cout << "   Ciri: L = 0 DAN R = n - 1\n\n";
    
    cout << "e. HANYA DIISI 10 PENGANTRI\n";
    cout << "   Jumlah = R - L + 1 = 10\n\n";
    
    return 0;
}
