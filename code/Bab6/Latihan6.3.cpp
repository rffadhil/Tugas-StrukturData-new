#include <iostream>
using namespace std;

int main() {
    int n = 100;
    
    cout << "ALGORITMA DASAR LINEAR QUEUE\n\n";
    
    cout << "a. INISIALISASI:\n";
    cout << "   F = 0;\n";
    cout << "   R = -1;\n\n";
    
    cout << "b. INSERT sebuah record:\n";
    cout << "   R = R + 1;\n";
    cout << "   Q[R] = x;\n\n";
    
    cout << "c. DELETE sebuah record:\n";
    cout << "   x = Q[F];\n";
    cout << "   F = F + 1;\n\n";
    
    cout << "d. RESET:\n";
    cout << "   F = 0;\n";
    cout << "   R = -1;\n\n";
    
    return 0;
}
