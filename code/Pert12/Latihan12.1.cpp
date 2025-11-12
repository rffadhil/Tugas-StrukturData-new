#include <iostream>
using namespace std;

int main() {
    cout << "==========================" << endl;
    cout << " LATIHAN 12 - NOMOR 1" << endl;
    cout << "==========================" << endl << endl;

    cout << "Gambar merepresentasikan struktur Doubly Linked List.\n" << endl;

    cout << "Penjelasan poin a:" << endl;
    cout << "------------------" << endl;
    cout << "(1) Pointer Q          -> menunjuk ke node pertama." << endl;
    cout << "(2) LEFT dari node 1   -> bernilai NULL (karena node pertama tidak punya kiri)." << endl;
    cout << "(3) INFO dari node 1   -> menyimpan data (misalnya X)." << endl;
    cout << "(4) LEFT dari node 2   -> menunjuk ke node pertama." << endl;
    cout << "(5) INFO dari node 2   -> menyimpan data (misalnya X)." << endl;
    cout << "(6) RIGHT dari node 2  -> bernilai NULL (karena node terakhir tidak punya kanan)." << endl;
    cout << "(7) RIGHT dari node 1  -> menunjuk ke node kedua." << endl;
    cout << "(8) Node kedua (alamat yang ditunjuk oleh (7) dan (4))." << endl << endl;

    cout << "Penjelasan poin b:" << endl;
    cout << "------------------" << endl;
    cout << "- Pointer (7) dan (4) memiliki nilai yang sama," << endl;
    cout << "  karena keduanya menunjuk ke node kedua." << endl;
    cout << "- Pointer (2) dan (6) juga memiliki nilai yang sama," << endl;
    cout << "  karena keduanya bernilai NULL (tidak menunjuk ke mana-mana)." << endl << endl;

    cout << "Kesimpulan:" << endl;
    cout << "Program ini menjelaskan struktur dan hubungan antar pointer" << endl;
    cout << "pada Doubly Linked List sederhana dengan dua node." << endl;

    return 0;
}
