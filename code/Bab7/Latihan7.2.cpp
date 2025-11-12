#include <iostream>
using namespace std;

int main() {
    int n = 10;
    
    cout << "ALGORITMA LENGKAP CIRCULAR QUEUE\n\n";
    
    // a. INSERT
    cout << "a. ALGORITMA INSERT:\n";
    cout << "   void INSERT(int x) {\n";
    cout << "       if(COUNTER < n) {\n";
    cout << "           R = (R + 1) % n;\n";
    cout << "           Q[R] = x;\n";
    cout << "           COUNTER++;\n";
    cout << "       }\n";
    cout << "       else cout << \"Queue Penuh\";\n";
    cout << "   }\n\n";
    
    // b. DELETE
    cout << "b. ALGORITMA DELETE:\n";
    cout << "   void DELETE() {\n";
    cout << "       if(COUNTER > 0) {\n";
    cout << "           x = Q[F];\n";
    cout << "           F = (F + 1) % n;\n";
    cout << "           COUNTER--;\n";
    cout << "       }\n";
    cout << "       else cout << \"Queue Kosong\";\n";
    cout << "   }\n\n";
    
    return 0;
}
