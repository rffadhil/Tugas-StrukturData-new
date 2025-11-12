#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top1 = -1;
    int top2 = 10;
    int n = 10;
    
    cout << "ALGORITMA DOUBLE STACK\n\n";
    
    cout << "a. ALGORITMA PUSH1 (Mengisi Stack1):\n";
    cout << "   void PUSH1(int x) {\n";
    cout << "       top1 = top1 + 1;\n";
    cout << "       S[top1] = x;\n";
    cout << "   }\n\n";
    
    cout << "b. ALGORITMA POP1 (Menghapus isi Stack1):\n";
    cout << "   void POP1() {\n";
    cout << "       x = S[top1];\n";
    cout << "       top1 = top1 - 1;\n";
    cout << "   }\n\n";
    
    cout << "c. ALGORITMA PUSH2 (Mengisi Stack2):\n";
    cout << "   void PUSH2(int x) {\n";
    cout << "       top2 = top2 - 1;\n";
    cout << "       S[top2] = x;\n";
    cout << "   }\n\n";
    
    cout << "d. ALGORITMA POP2 (Menghapus isi Stack2):\n";
    cout << "   void POP2() {\n";
    cout << "       x = S[top2];\n";
    cout << "       top2 = top2 + 1;\n";
    cout << "   }\n\n";
    
    return 0;
}
