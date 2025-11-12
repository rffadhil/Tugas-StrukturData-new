#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int F, R;
    
    cout << "MENGHITUNG JUMLAH ELEMEN TANPA COUNTER\n\n";
    
    cout << "Masukkan nilai F: ";
    cin >> F;
    cout << "Masukkan nilai R: ";
    cin >> R;
    
    int jumlah;
    
    if(R >= F) {
        jumlah = R - F + 1;
    } else {
        jumlah = (n - F) + (R + 1);
    }
    
    cout << "\nJumlah elemen yang ada isinya = " << jumlah << "\n";
    
    if(R >= F) {
        cout << "Rumus: R - F + 1 = " << R << " - " << F << " + 1 = " << jumlah << "\n";
    } else {
        cout << "Rumus: (n - F) + (R + 1) = (" << n << " - " << F << ") + (" << R << " + 1) = " << jumlah << "\n";
    }
    
    return 0;
}
