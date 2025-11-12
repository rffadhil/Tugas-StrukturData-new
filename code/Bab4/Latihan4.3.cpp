#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top = -1;
    int data;
    
    cout << "PUSH DATA KE STACK\n";
    
    while(top < 9) {
        cout << "Masukkan data: ";
        cin >> data;
        
        top++;
        S[top] = data;
        cout << "Data " << data << " ditambahkan (top = " << top << ")\n";
    }
    
    cout << "\nStack Penuh!\n";
    cout << "Total data: " << (top + 1) << "\n";
    
    return 0;
}
