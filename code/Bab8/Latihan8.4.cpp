#include <iostream>
using namespace std;

int main() {
    int Q[10];
    int L = 0, R = -1;
    int n = 10;
    int data;
    
    cout << "Isi queue dari kanan (ketik -1 untuk berhenti):\n";
    while(R < n-1) {
        cout << "Data: ";
        cin >> data;
        if(data == -1) break;
        
        R++;
        Q[R] = data;
    }
    
    cout << "\nDELETE DARI KANAN SAMPAI KOSONG\n";
    
    while(L < R+1) {
        cout << "Data " << Q[R] << " dihapus (L=" << L << ", R=" << R << ")\n";
        R--;
    }
    
    cout << "\nQueue Kosong! (L = R + 1)\n";
    
    return 0;
}
