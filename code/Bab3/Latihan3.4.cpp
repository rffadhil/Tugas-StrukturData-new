#include <iostream>
using namespace std;

struct Buku {
    int no_akses;
    string nama_penulis;
    string judul_buku;
    bool diterbitkan;
    int jumlah;
};

Buku perpus[100];
int totalBuku = 0;

void tampilBuku(int index) {
    cout << "\nNo Akses: " << perpus[index].no_akses << "\n";
    cout << "Penulis: " << perpus[index].nama_penulis << "\n";
    cout << "Judul: " << perpus[index].judul_buku << "\n";
    cout << "Status: " << (perpus[index].diterbitkan ? "Diterbitkan" : "Belum") << "\n";
    cout << "Jumlah: " << perpus[index].jumlah << "\n";
}

void tambahBuku() {
    if(totalBuku >= 100) {
        cout << "Perpustakaan penuh!\n";
        return;
    }
    
    cout << "\nTAMBAH BUKU\n";
    cout << "No Akses: ";
    cin >> perpus[totalBuku].no_akses;
    cout << "Nama Penulis: ";
    cin.ignore();
    getline(cin, perpus[totalBuku].nama_penulis);
    cout << "Judul Buku: ";
    getline(cin, perpus[totalBuku].judul_buku);
    cout << "Sudah diterbitkan? (1=Ya, 0=Tidak): ";
    cin >> perpus[totalBuku].diterbitkan;
    cout << "Jumlah: ";
    cin >> perpus[totalBuku].jumlah;
    
    totalBuku++;
    cout << "Buku berhasil ditambahkan!\n";
}

void tampilSemuaBuku() {
    if(totalBuku == 0) {
        cout << "\nBelum ada buku.\n";
        return;
    }
    
    cout << "\nSEMUA BUKU\n";
    for(int i = 0; i < totalBuku; i++) {
        tampilBuku(i);
    }
}

void cariBukuPenulis() {
    string penulis;
    cout << "\nNama Penulis: ";
    cin.ignore();
    getline(cin, penulis);
    
    cout << "\nBUKU KARYA " << penulis << " \n";
    bool ada = false;
    for(int i = 0; i < totalBuku; i++) {
        if(perpus[i].nama_penulis == penulis) {
            tampilBuku(i);
            ada = true;
        }
    }
    if(!ada) cout << "Tidak ditemukan.\n";
}

void hitungJudul() {
    string judul;
    cout << "\nJudul Buku: ";
    cin.ignore();
    getline(cin, judul);
    
    int total = 0;
    for(int i = 0; i < totalBuku; i++) {
        if(perpus[i].judul_buku == judul) {
            total += perpus[i].jumlah;
        }
    }
    cout << "Total buku \"" << judul << "\": " << total << "\n";
}

void totalSemuaBuku() {
    int total = 0;
    for(int i = 0; i < totalBuku; i++) {
        total += perpus[i].jumlah;
    }
    cout << "\nTotal semua buku di perpustakaan: " << total << "\n";
}

void terbitkanBuku() {
    int no;
    cout << "\nNo Akses buku yang akan diterbitkan: ";
    cin >> no;
    
    for(int i = 0; i < totalBuku; i++) {
        if(perpus[i].no_akses == no) {
            if(perpus[i].jumlah > 0) {
                perpus[i].jumlah--;
                cout << "Buku berhasil diterbitkan. Sisa: " << perpus[i].jumlah << "\n";
            } else {
                cout << "Stok habis!\n";
            }
            return;
        }
    }
    cout << "Buku tidak ditemukan.\n";
}

int main() {
    int pilihan;
    
    while(true) {
        cout << "\nMENU PERPUSTAKAAN\n";
        cout << "1. Tampilkan informasi buku\n";
        cout << "2. Tambah buku baru\n";
        cout << "3. Tampilkan semua buku penulis tertentu\n";
        cout << "4. Tampilkan jumlah buku dengan judul tertentu\n";
        cout << "5. Tampilkan total buku di perpustakaan\n";
        cout << "6. Terbitkan buku\n";
        cout << "7. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1: {
                int no;
                cout << "No Akses: ";
                cin >> no;
                bool ada = false;
                for(int i = 0; i < totalBuku; i++) {
                    if(perpus[i].no_akses == no) {
                        tampilBuku(i);
                        ada = true;
                        break;
                    }
                }
                if(!ada) cout << "Buku tidak ditemukan.\n";
                break;
            }
            case 2: tambahBuku(); break;
            case 3: cariBukuPenulis(); break;
            case 4: hitungJudul(); break;
            case 5: totalSemuaBuku(); break;
            case 6: terbitkanBuku(); break;
            case 7: return 0;
            default: cout << "Pilihan tidak valid!\n";
        }
    }
    
    return 0;
}
