#include <iostream>
using namespace std;

int main() {
    int Q[10];
    int L = 0, R = -1;
    int n = 10;
    int data;
    
    cout << "INSERT DARI KANAN SAMPAI PENUH\n";
    
    while(R < n-1) {
        cout << "Data: ";
        cin >> data;
        
        R++;
        Q[R] = data;
        
        cout << "Data ditambahkan (L=" << L << ", R=" << R << ")\n";
    }
    
    cout << "\nPenuh Kanan! (R = n-1)\n";
    
    return 0;
}
