#include <iostream>
#include <string>
using namespace std;

struct Mhs {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mhs *next;
};

Mhs *FIRST = NULL, *LAST = NULL;

Mhs* buatNode(string nama, string nim, string gender, float nilai) {
    Mhs *baru = new Mhs;
    baru->nama = nama;
    baru->nim = nim;
    baru->gender = gender;
    baru->nilai = nilai;
    baru->next = NULL;
    return baru;
}

void insertData() {
    string nama, nim, gender;
    float nilai;

    cout << "Nama   : ";
    cin >> nama;
    cout << "NIM    : ";
    cin >> nim;
    cout << "Gender : ";
    cin >> gender;
    cout << "Nilai  : ";
    cin >> nilai;

    Mhs *baru = buatNode(nama, nim, gender, nilai);

    if (FIRST == NULL) {
        FIRST = LAST = baru;
        LAST->next = FIRST;
        return;
    }

    if (nim < FIRST->nim) {
        baru->next = FIRST;
        FIRST = baru;
        LAST->next = FIRST;
        return;
    }

    Mhs *temp = FIRST;
    while (temp->next != FIRST && temp->next->nim < nim) {
        temp = temp->next;
    }

    baru->next = temp->next;
    temp->next = baru;

    if (temp == LAST)
        LAST = baru;
}

void hapusData() {
    if (FIRST == NULL) {
        cout << "List kosong.\n";
        return;
    }

    string nim;
    cout << "Masukkan NIM yang ingin dihapus: ";
    cin >> nim;

    Mhs *temp = FIRST, *prev = LAST;

    if (FIRST->nim == nim) {
        if (FIRST == LAST) {
            delete FIRST;
            FIRST = LAST = NULL;
        } else {
            FIRST = FIRST->next;
            LAST->next = FIRST;
            delete temp;
        }
        cout << "Data berhasil dihapus.\n";
        return;
    }

    temp = FIRST->next;
    prev = FIRST;

    while (temp != FIRST && temp->nim != nim) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == FIRST) {
        cout << "Data tidak ditemukan.\n";
    } else {
        prev->next = temp->next;
        if (temp == LAST) LAST = prev;
        delete temp;
        cout << "Data berhasil dihapus.\n";
    }
}

void cetakData() {
    if (FIRST == NULL) {
        cout << "List kosong.\n";
        return;
    }

    Mhs *temp = FIRST;
    cout << "\n=== DATA MAHASISWA ===\n";
    do {
        cout << "NIM: " << temp->nim
             << ", Nama: " << temp->nama
             << ", Gender: " << temp->gender
             << ", Nilai: " << temp->nilai << endl;
        temp = temp->next;
    } while (temp != FIRST);
}

int main() {
    int pilih;

    do {
        cout << "\nCIRCULAR SINGLY LINKED LIST\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case 1: insertData(); break;
            case 2: hapusData(); break;
            case 3: cetakData(); break;
            case 4: cout << "Program selesai.\n"; break;
            default: cout << "Pilihan salah.\n";
        }
    } while (pilih != 4);

    return 0;
}
