#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa* next;
    Mahasiswa* prev;
};

Mahasiswa* head = NULL;
Mahasiswa* tail = NULL;

Mahasiswa* buatNode(string nama, string nim, string gender, float nilai) {
    Mahasiswa* baru = new Mahasiswa;
    baru->nama = nama;
    baru->nim = nim;
    baru->gender = gender;
    baru->nilai = nilai;
    baru->next = NULL;
    baru->prev = NULL;
    return baru;
}

void insertData() {
    string nama, nim, gender;
    float nilai;

    cout << "\nMasukkan Nama Mahasiswa   : ";
    getline(cin >> ws, nama);
    cout << "Masukkan NIM Mahasiswa    : ";
    cin >> nim;
    cout << "Masukkan Gender (L/P)     : ";
    cin >> gender;
    cout << "Masukkan Nilai Struktur Data : ";
    cin >> nilai;

    Mahasiswa* baru = buatNode(nama, nim, gender, nilai);

    if (head == NULL) {
        head = tail = baru;
        cout << "\nData berhasil ditambahkan.\n";
        return;
    }

    if (nim < head->nim) {
        baru->next = head;
        head->prev = baru;
        head = baru;
        cout << "\nData berhasil ditambahkan di awal.\n";
        return;
    }

    if (nim > tail->nim) {
        tail->next = baru;
        baru->prev = tail;
        tail = baru;
        cout << "\nData berhasil ditambahkan di akhir.\n";
        return;
    }

    Mahasiswa* bantu = head;
    while (bantu != NULL && bantu->nim < nim)
        bantu = bantu->next;

    baru->next = bantu;
    baru->prev = bantu->prev;
    bantu->prev->next = baru;
    bantu->prev = baru;

    cout << "\nData berhasil disisipkan di tengah.\n";
}

void hapusData() {
    if (head == NULL) {
        cout << "\nList masih kosong.\n";
        return;
    }

    string nimHapus;
    cout << "\nMasukkan NIM yang akan dihapus: ";
    cin >> nimHapus;

    Mahasiswa* hapus = head;
    while (hapus != NULL && hapus->nim != nimHapus)
        hapus = hapus->next;

    if (hapus == NULL) {
        cout << "\nData dengan NIM " << nimHapus << " tidak ditemukan.\n";
        return;
    }

    if (hapus == head) {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;
    } else if (hapus == tail) {
        tail = tail->prev;
        tail->next = NULL;
    } else {
        hapus->prev->next = hapus->next;
        hapus->next->prev = hapus->prev;
    }

    cout << "\nData dengan NIM " << nimHapus << " berhasil dihapus.\n";
    delete hapus;
}

void cetakData() {
    if (head == NULL) {
        cout << "\nTidak ada data.\n";
        return;
    }

    cout << "\n===== DAFTAR DATA MAHASISWA =====\n";
    cout << left << setw(15) << "NIM"
         << setw(20) << "NAMA"
         << setw(10) << "GENDER"
         << setw(10) << "NILAI" << endl;
    cout << "-------------------------------------------\n";

    Mahasiswa* bantu = head;
    while (bantu != NULL) {
        cout << left << setw(15) << bantu->nim
             << setw(20) << bantu->nama
             << setw(10) << bantu->gender
             << setw(10) << bantu->nilai << endl;

        if (bantu->next != NULL)
            cout << "      ↓\n";
        bantu = bantu->next;
    }

    cout << "-------------------------------------------\n";
}

int main() {
    int pilihan;

    do {
        cout << "\n===============================================";
        cout << "\n   PROGRAM LINEAR DOUBLY LINKED LIST MAHASISWA";
        cout << "\n===============================================";
        cout << "\n1. INSERT DATA";
        cout << "\n2. HAPUS DATA";
        cout << "\n3. CETAK DATA";
        cout << "\n4. EXIT";
        cout << "\nPilihan (1-4): ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: insertData(); break;
            case 2: hapusData(); break;
            case 3: cetakData(); break;
            case 4: cout << "\nProgram selesai.\n"; break;
            default: cout << "\nPilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    while (head != NULL) {
        Mahasiswa* hapus = head;
        head = head->next;
        delete hapus;
    }

    return 0;
}
