#include <iostream>
using namespace std;

int main() {
    int skor;
    
    cout << "SISTEM PENILAIAN SISWA" << endl;
    cout << "Masukkan nilai siswa (0-100): ";
    cin >> skor;
    
    cout << endl << "HASIL PENILAIAN" << endl;
    cout << "Skor: " << skor << endl;
    
    if(skor < 0 || skor > 100) {
        cout << "Error: Skor harus dalam rentang 0-100" << endl;
        return 1;
    }
    
    cout << "Nilai: ";
    if(skor >= 90) {
        cout << "A" << endl;
        cout << "Kategori: Sangat Baik" << endl;
    }
    else if(skor >= 80) {
        cout << "B" << endl;
        cout << "Kategori: Baik" << endl;
    }
    else if(skor >= 70) {
        cout << "C" << endl;
        cout << "Kategori: Cukup" << endl;
    }
    else if(skor >= 60) {
        cout << "D" << endl;
        cout << "Kategori: Kurang" << endl;
    }
    else {
        cout << "F" << endl;
        cout << "Kategori: Gagal" << endl;
    }

    if(skor == 100) {
        cout << endl << "Skor sempurna" << endl;
    }
    
    cout << endl << "STATUS AKADEMIK" << endl;
    if(skor >= 70) {
        cout << "Status: LULUS" << endl;
    } else {
        cout << "Status: TIDAK LULUS" << endl;
    }
    
    return 0;
}
