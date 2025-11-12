#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float nilai;
    Mahasiswa* next;
};

// Fungsi untuk membuat node baru
Mahasiswa* buatNode(string nim, string nama, float nilai) {
    Mahasiswa* baru = new Mahasiswa;
    baru->nim = nim;
    baru->nama = nama;
    baru->nilai = nilai;
    baru->next = NULL;
    return baru;
}

// a. Tambah data berdasarkan nilai (ascending)
void insertData(Mahasiswa*& head, string nim, string nama, float nilai) {
    Mahasiswa* baru = buatNode(nim, nama, nilai);
    if (head == NULL || nilai < head->nilai) {
        baru->next = head;
        head = baru;
        return;
    }
    Mahasiswa* bantu = head;
    while (bantu->next != NULL && bantu->next->nilai < nilai)
        bantu = bantu->next;
    baru->next = bantu->next;
    bantu->next = baru;
}

// b. Tampilkan data dengan nilai = 90
void tampilkanNilai90(Mahasiswa* head) {
    cout << "\nData dengan nilai = 90:\n";
    bool ada = false;
    while (head != NULL) {
        if (head->nilai == 90) {
            cout << head->nim << " - " << head->nama << " - " << head->nilai << endl;
            ada = true;
        }
        head = head->next;
    }
    if (!ada) cout << "Tidak ada data dengan nilai 90.\n";
}

// c. Tampilkan seluruh data
void tampilkanSemua(Mahasiswa* head) {
    cout << "\nData Mahasiswa (berdasarkan nilai naik):\n";
    cout << "--------------------------------------\n";
    while (head != NULL) {
        cout << "NIM: " << head->nim << "\nNama: " << head->nama << "\nNilai: " << head->nilai << endl;
        cout << "--------------------------------------\n";
        head = head->next;
    }
}

// d. Hapus data berdasarkan NIM
void hapusData(Mahasiswa*& head, string nimHapus) {
    if (head == NULL) {
        cout << "List kosong!\n";
        return;
    }

    Mahasiswa* hapus;
    if (head->nim == nimHapus) {
        hapus = head;
        head = head->next;
        delete hapus;
        cout << "Data dengan NIM " << nimHapus << " berhasil dihapus.\n";
        return;
    }

    Mahasiswa* bantu = head;
    while (bantu->next != NULL && bantu->next->nim != nimHapus)
        bantu = bantu->next;

    if (bantu->next == NULL) {
        cout << "Data dengan NIM " << nimHapus << " tidak ditemukan.\n";
        return;
    }

    hapus = bantu->next;
    bantu->next = bantu->next->next;
    delete hapus;
    cout << "Data dengan NIM " << nimHapus << " berhasil dihapus.\n";
}

// e. Hitung nilai rata-rata kelas
void hitungRataRata(Mahasiswa* head) {
    int count = 0;
    float total = 0;
    while (head != NULL) {
        total += head->nilai;
        count++;
        head = head->next;
    }
    if (count == 0)
        cout << "Tidak ada data.\n";
    else
        cout << "\nNilai rata-rata kelas = " << total / count << endl;
}

// Main program
int main() {
    Mahasiswa* head = NULL;
    int pilih;
    string nim, nama;
    float nilai;

    do {
        cout << "\n===== MENU LINKED LIST MAHASISWA =====\n";
        cout << "1. Tambah Data\n";
        cout << "2. Tampilkan Data Nilai = 90\n";
        cout << "3. Tampilkan Semua Data\n";
        cout << "4. Hapus Data (NIM = 2007140022)\n";
        cout << "5. Hitung Nilai Rata-rata Kelas\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;
        cin.ignore();

        switch (pilih) {
            case 1:
                cout << "\nMasukkan NIM: ";
                getline(cin, nim);
                cout << "Masukkan Nama: ";
                getline(cin, nama);
                cout << "Masukkan Nilai: ";
                cin >> nilai;
                insertData(head, nim, nama, nilai);
                break;
            case 2:
                tampilkanNilai90(head);
                break;
            case 3:
                tampilkanSemua(head);
                break;
            case 4:
                hapusData(head, "2007140022");
                break;
            case 5:
                hitungRataRata(head);
                break;
            case 6:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilih != 6);

    return 0;
}
