#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top1 = -1;
    int top2 = 10;
    int n = 10;
    
    cout << "ALGORITMA DASAR DOUBLE STACK\n\n";
    
    // a. PUSH1
    cout << "a. ALGORITMA DASAR PUSH1:\n";
    cout << "   top1 = top1 + 1;\n";
    cout << "   S[top1] = x;\n\n";
    
    // b. POP1
    cout << "b. ALGORITMA DASAR POP1:\n";
    cout << "   x = S[top1];\n";
    cout << "   top1 = top1 - 1;\n\n";
    
    // c. PUSH2
    cout << "c. ALGORITMA DASAR PUSH2:\n";
    cout << "   top2 = top2 - 1;\n";
    cout << "   S[top2] = x;\n\n";
    
    // d. POP2
    cout << "d. ALGORITMA DASAR POP2:\n";
    cout << "   x = S[top2];\n";
    cout << "   top2 = top2 + 1;\n\n";
    
    return 0;
}
