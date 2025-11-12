#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa* next;
};

Mahasiswa* head = NULL;

// Fungsi untuk menambahkan data (PUSH)
void insertData() {
    Mahasiswa* baru = new Mahasiswa;
    cout << "\nMasukkan Nama Mahasiswa: ";
    getline(cin >> ws, baru->nama);
    cout << "Masukkan NIM Mahasiswa: ";
    cin >> baru->nim;
    cout << "Masukkan Gender (L/P): ";
    cin >> baru->gender;
    cout << "Masukkan Nilai Struktur Data: ";
    cin >> baru->nilai;

    baru->next = head;
    head = baru;

    cout << "\nData berhasil dimasukkan ke Stack.\n";
}

// Fungsi untuk menghapus data (POP)
void hapusData() {
    if (head == NULL) {
        cout << "\nStack masih kosong!\n";
        return;
    }

    Mahasiswa* hapus = head;
    head = head->next;

    cout << "\nData teratas berhasil dihapus:\n";
    cout << "Nama: " << hapus->nama << "\nNIM: " << hapus->nim << "\n";
    delete hapus;
}

// Fungsi untuk menampilkan data (CETAK)
void cetakData() {
    if (head == NULL) {
        cout << "\nStack kosong!\n";
        return;
    }

    Mahasiswa* bantu = head;
    cout << "\nIsi Stack Saat Ini:\n";
    cout << "-----------------------------------------------\n";
    while (bantu != NULL) {
        cout << "Nama: " << bantu->nama
             << "\nNIM: " << bantu->nim
             << "\nGender: " << bantu->gender
             << "\nNilai Struktur Data: " << bantu->nilai << "\n";
        cout << "-----------------------------------------------\n";
        bantu = bantu->next;
    }
}

int main() {
    int pilihan;
    do {
        cout << "\n===== PROGRAM STACK (Linked List - Dengan Head) =====";
        cout << "\n1. INSERT DATA";
        cout << "\n2. HAPUS DATA";
        cout << "\n3. CETAK DATA";
        cout << "\n4. EXIT";
        cout << "\nPilih menu: ";
        cin >> pilihan;
        cin.ignore(); // biar getline tidak error

        switch (pilihan) {
            case 1:
                insertData();
                break;
            case 2:
                hapusData();
                break;
            case 3:
                cetakData();
                break;
            case 4:
                cout << "\nProgram selesai.\n";
                break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}
