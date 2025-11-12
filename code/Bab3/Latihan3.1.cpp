#include <iostream>
#include <string.h>
using namespace std;

struct Mahasiswa {
    int noUrut;
    char nama[50];
    int usia;
    float nilai;
};

int main() {
    Mahasiswa mhs1;
    
    cout << "Masukkan data mahasiswa:" << endl;
    cout << "No Urut: ";
    cin >> mhs1.noUrut;
    cin.ignore(); 
    
    cout << "Nama: ";
    cin.getline(mhs1.nama, 50);
    
    cout << "Usia: ";
    cin >> mhs1.usia;
    
    cout << "Nilai: ";
    cin >> mhs1.nilai;
    
    cout << "\nData yang telah disimpan:" << endl;
    cout << "No Urut: " << mhs1.noUrut << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Usia: " << mhs1.usia << " tahun" << endl;
    cout << "Nilai: " << mhs1.nilai << endl << endl;
}
