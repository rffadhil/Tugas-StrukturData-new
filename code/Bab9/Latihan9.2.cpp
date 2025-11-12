#include <iostream>
using namespace std;

int main() {
    cout << "a. Menunjuk simpul no (1):\n\n";
    cout << "   Q = FIRST;\n\n";
    cout << "   Penjelasan: Simpul (1) adalah simpul pertama\n\n";
    
    cout << "b. Menunjuk simpul no (7):\n\n";
    cout << "   Q = FIRST;\n";
    cout << "   for(int i = 1; i <= 6; i++) {\n";
    cout << "       Q = Q->LINK;\n";
    cout << "   }\n\n";
    cout << "   Penjelasan: Mulai dari FIRST, lompat 6 kali\n\n";
    
    cout << "c. Menunjuk simpul akhir:\n\n";
    cout << "   Cara 1 (jika ada LAST):\n";
    cout << "   Q = LAST;\n\n";
    cout << "   Cara 2 (traversal):\n";
    cout << "   Q = FIRST;\n";
    cout << "   while(Q->LINK != NULL) {\n";
    cout << "       Q = Q->LINK;\n";
    cout << "   }\n\n";
    
    cout << "d. Menunjuk simpul dengan INFO = 50:\n\n";
    cout << "   Q = FIRST;\n";
    cout << "   while(Q != NULL && Q->INFO != 50) {\n";
    cout << "       Q = Q->LINK;\n";
    cout << "   }\n\n";
    cout << "   Penjelasan: Telusuri sampai menemukan INFO = 50\n\n";
    
    cout << "e. Menunjuk simpul sebelum INFO = 50:\n\n";
    cout << "   Q = FIRST;\n";
    cout << "   while(Q->LINK != NULL && Q->LINK->INFO != 50) {\n";
    cout << "       Q = Q->LINK;\n";
    cout << "   }\n\n";
    cout << "   Penjelasan: Cek simpul berikutnya, jika INFO-nya 50,\n";
    cout << "   maka Q sudah di simpul sebelumnya\n";
    
    return 0;
}
