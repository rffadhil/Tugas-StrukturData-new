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

// PUSH
void push(Mahasiswa*& top) {
    Mahasiswa* baru = new Mahasiswa;
    cout << "\nMasukkan Nama Mahasiswa: ";
    getline(cin >> ws, baru->nama);
    cout << "Masukkan NIM Mahasiswa: ";
    cin >> baru->nim;
    cout << "Masukkan Gender (L/P): ";
    cin >> baru->gender;
    cout << "Masukkan Nilai Struktur Data: ";
    cin >> baru->nilai;

    baru->next = top;  // sambungkan ke node lama
    top = baru;        // jadikan node baru sebagai top

    cout << "\nData berhasil dimasukkan ke Stack.\n";
}

// POP
void pop(Mahasiswa*& top) {
    if (top == NULL) {
        cout << "\nStack kosong, tidak ada data yang bisa dihapus.\n";
        return;
    }

    Mahasiswa* hapus = top;
    top = top->next; // geser top ke node berikutnya

    cout << "\nData yang dihapus:\n";
    cout << "Nama: " << hapus->nama << endl;
    cout << "NIM: " << hapus->nim << endl;
    delete hapus;
}

// CETAK
void printStack(Mahasiswa* top) {
    if (top == NULL) {
        cout << "\nStack kosong!\n";
        return;
    }

    cout << "\nIsi Stack Saat Ini:\n";
    cout << "-----------------------------------------------\n";
    Mahasiswa* bantu = top;
    while (bantu != NULL) {
        cout << "Nama: " << bantu->nama << endl;
        cout << "NIM: " << bantu->nim << endl;
        cout << "Gender: " << bantu->gender << endl;
        cout << "Nilai Struktur Data: " << bantu->nilai << endl;
        cout << "-----------------------------------------------\n";
        bantu = bantu->next;
    }
}

int main() {
    Mahasiswa* top = NULL;
    int pilihan;

    do {
        cout << "\n===== PROGRAM STACK (Linked List - Tanpa Head) =====";
        cout << "\n1. INSERT DATA (PUSH)";
        cout << "\n2. HAPUS DATA (POP)";
        cout << "\n3. CETAK DATA (PRINT)";
        cout << "\n4. EXIT";
        cout << "\nPilih menu: ";
        cin >> pilihan;
        cin.ignore(); // biar getline nggak error

        switch (pilihan) {
            case 1:
                push(top);
                break;
            case 2:
                pop(top);
                break;
            case 3:
                printStack(top);
                break;
            case 4:
                cout << "\nProgram selesai.\n";
                break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    // Bersihkan memori sebelum keluar
    while (top != NULL) {
        Mahasiswa* hapus = top;
        top = top->next;
        delete hapus;
    }

    return 0;
}
