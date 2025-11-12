#include <iostream>
using namespace std;

struct Mahasiswa {
    int no_urut;
    string nama;
    int umur;
    string alamat;
    float nilai;
};

int main() {
    Mahasiswa mhs[15];
    
    cout << "INPUT 15 DATA MAHASISWA\n";
    for(int i = 0; i < 15; i++) {
        mhs[i].no_urut = i + 1;
        cout << "\nMahasiswa ke-" << (i+1) << ":\n";
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "Umur: ";
        cin >> mhs[i].umur;
        cout << "Alamat: ";
        cin.ignore();
        getline(cin, mhs[i].alamat);
        cout << "Nilai: ";
        cin >> mhs[i].nilai;
    }
    
    cout << "\nDATA 15 MAHASISWA\n";
    for(int i = 0; i < 15; i++) {
        cout << "\nMahasiswa ke-" << (i+1) << ":\n";
        cout << "No Urut: " << mhs[i].no_urut << "\n";
        cout << "Nama: " << mhs[i].nama << "\n";
        cout << "Umur: " << mhs[i].umur << "\n";
        cout << "Alamat: " << mhs[i].alamat << "\n";
        cout << "Nilai: " << mhs[i].nilai << "\n";
    }
    
    return 0;
}
