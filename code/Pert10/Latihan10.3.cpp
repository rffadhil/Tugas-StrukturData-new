#include <iostream>
using namespace std;

int main() {
    cout << "PENERAPAN APLIKASI STACK DENGAN ARRAY\n\n";
    
    cout << "1. DEKLARASI STACK:\n";
    cout << "   int S[10];  // Array untuk menyimpan data\n";
    cout << "   int top = -1;  // Pointer ke posisi teratas\n\n";
    
    cout << "2. OPERASI PUSH (Menambah data):\n";
    cout << "   if(top < 9) {\n";
    cout << "       top++;\n";
    cout << "       S[top] = data;\n";
    cout << "   }\n\n";
    
    cout << "3. OPERASI POP (Mengambil data):\n";
    cout << "   if(top > -1) {\n";
    cout << "       data = S[top];\n";
    cout << "       top--;\n";
    cout << "   }\n\n";
    
    cout << "4. CEK KOSONG:\n";
    cout << "   if(top == -1) // Stack kosong\n\n";
    
    cout << "5. CEK PENUH:\n";
    cout << "   if(top == 9) // Stack penuh (untuk array[10])\n\n";
    
    cout << "KELEBIHAN:\n";
    cout << "- Implementasi sederhana\n";
    cout << "- Akses cepat\n";
    cout << "- Tidak perlu pointer\n\n";
    
    cout << "KEKURANGAN:\n";
    cout << "- Ukuran tetap (tidak dinamis)\n";
    cout << "- Boros memori jika tidak penuh\n";
    cout << "- Tidak bisa ditambah jika penuh\n";
    
    return 0;
}
