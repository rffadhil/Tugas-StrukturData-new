#include <iostream>
using namespace std;

int main() {
    int n = 100;
    int F, R;
    
    cout << "MENGHITUNG JUMLAH PENGANTRI & KOLOM KOSONG\n\n";
    
    cout << "Masukkan nilai F: ";
    cin >> F;
    cout << "Masukkan nilai R: ";
    cin >> R;
    
    if(F == 15 && R == 37) {
        int jumlahPengantri = R - F + 1;
        cout << "\na. F = " << F << ", R = " << R << "\n";
        cout << "   Jumlah pengantri yang belum dilayani = " << jumlahPengantri << "\n";
        cout << "   Rumus: R - F + 1 = " << R << " - " << F << " + 1 = " << jumlahPengantri << "\n";
    }
    
    if(F == 15 && R == 37) {
        int kolomKosong = n - R - 1;
        cout << "\nb. F = " << F << ", R = " << R << "\n";
        cout << "   Jumlah kolom yang masih bisa diisi = " << kolomKosong << "\n";
        cout << "   Rumus: n - R - 1 = " << n << " - " << R << " - 1 = " << kolomKosong << "\n";
    }
    
    return 0;
}
