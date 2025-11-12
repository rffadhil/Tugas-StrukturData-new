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
    cout << "\nNo Akses: " << perpus[index].no_akses;
    cout << " | Penulis: " << perpus[index].nama_penulis;
    cout << " | Judul: " << perpus[index].judul_buku;
    cout << " | Jumlah: " << perpus[index].jumlah << "\n";
}

void tambahBuku() {
    cout << "\nTAMBAH BUKU\n";
    cout << "No Akses: ";
    cin >> perpus[totalBuku].no_akses;
    cout << "Penulis: ";
    cin.ignore();
    getline(cin, perpus[totalBuku].nama_penulis);
    cout << "Judul: ";
    getline(cin, perpus[totalBuku].judul_buku);
    perpus[totalBuku].diterbitkan = true;
    perpus[totalBuku].jumlah = 1;
    totalBuku++;
    cout << "Buku ditambahkan!\n";
}

void terbitkanBuku() {
    int no;
    cout << "\nNo Akses: ";
    cin >> no;
    
    for(int i = 0; i < totalBuku; i++) {
        if(perpus[i].no_akses == no) {
            if(perpus[i].jumlah > 0) {
                perpus[i].jumlah--;
                cout << "Diterbitkan! Sisa: " << perpus[i].jumlah << "\n";
            } else {
                cout << "Stok habis!\n";
            }
            return;
        }
    }
    cout << "Tidak ditemukan.\n";
}

int main() {
    int pilihan;
    
    while(true) {
        cout << "\nPERPUSTAKAAN\n";
        cout << "1. Tampilkan info buku\n";
        cout << "2. Tambah buku\n";
        cout << "3. Buku oleh penulis\n";
        cout << "4. Jumlah buku judul\n";
        cout << "5. Total buku\n";
        cout << "6. Terbitkan buku\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        
        if(pilihan == 0) break;
        
        switch(pilihan) {
            case 1: {
                int no;
                cout << "No Akses: ";
                cin >> no;
                for(int i = 0; i < totalBuku; i++) {
                    if(perpus[i].no_akses == no) {
                        tampilBuku(i);
                        break;
                    }
                }
                break;
            }
            case 2: tambahBuku(); break;
            case 3: {
                string penulis;
                cout << "Penulis: ";
                cin.ignore();
                getline(cin, penulis);
                for(int i = 0; i < totalBuku; i++) {
                    if(perpus[i].nama_penulis == penulis) {
                        tampilBuku(i);
                    }
                }
                break;
            }
            case 4: {
                string judul;
                cout << "Judul: ";
                cin.ignore();
                getline(cin, judul);
                int jml = 0;
                for(int i = 0; i < totalBuku; i++) {
                    if(perpus[i].judul_buku == judul) jml += perpus[i].jumlah;
                }
                cout << "Total: " << jml << "\n";
                break;
            }
            case 5: {
                int total = 0;
                for(int i = 0; i < totalBuku; i++) total += perpus[i].jumlah;
                cout << "Total: " << total << "\n";
                break;
            }
            case 6: terbitkanBuku(); break;
        }
    }
    
    return 0;
}
