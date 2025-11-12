#include <iostream>
using namespace std;

int main() {
    int n = 10;
    
    cout << "ALGORITMA DASAR DOUBLE ENDED QUEUE\n\n";
    
    cout << "a. INISIALISASI:\n";
    cout << "   L = 0;\n";
    cout << "   R = -1;\n\n";
    
    cout << "b. INSERT KANAN:\n";
    cout << "   R = R + 1;\n";
    cout << "   Q[R] = x;\n\n";
    
    cout << "c. INSERT KIRI:\n";
    cout << "   L = L - 1;\n";
    cout << "   Q[L] = x;\n\n";
    
    cout << "d. DELETE KANAN:\n";
    cout << "   x = Q[R];\n";
    cout << "   R = R - 1;\n\n";
    
    cout << "e. DELETE KIRI:\n";
    cout << "   x = Q[L];\n";
    cout << "   L = L + 1;\n\n";
    
    return 0;
}
