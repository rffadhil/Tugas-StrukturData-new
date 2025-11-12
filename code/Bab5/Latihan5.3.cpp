#include <iostream>
using namespace std;

int main() {
    int n = 10;
    
    cout << "CIRI DOUBLE STACK\n\n";
    
    cout << "a. PENUH (Baik Stack1 maupun Stack2 tak bisa diisi lagi)\n";
    cout << "   Ciri: top2 - top1 = 1\n\n";
    
    cout << "b. BISA DIISI (Baik Stack1 maupun Stack2 bisa diisi lagi)\n";
    cout << "   Ciri: top2 - top1 > 1\n\n";
    
    cout << "c. KOSONG (Baik Stack1 maupun Stack2 tak ada isinya)\n";
    cout << "   Ciri: top1 = -1 DAN top2 = n\n";
    cout << "   (untuk n=10: top1 = -1 DAN top2 = 10)\n\n";
    
    return 0;
}
