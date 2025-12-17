#include <iostream>
using namespace std;

// Fungsi Binary Search dengan tampilan tabel iterasi
int binarySearchWithTable(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    int iteration = 1;
    
    cout << "\nProses Binary Search untuk mencari nilai " << x << ":" << endl;
    cout << "================================================================" << endl;
    cout << "Iterasi\tLeft\tRight\tMid\tArr[Mid]\tKeterangan" << endl;
    cout << "================================================================" << endl;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        cout << iteration << "\t" << left << "\t" << right << "\t" 
             << mid << "\t" << arr[mid] << "\t\t";
        
        // Cek apakah nilai ditemukan
        if (arr[mid] == x) {
            cout << "DITEMUKAN!" << endl;
            cout << "================================================================" << endl;
            cout << "\nNilai " << x << " ditemukan pada iterasi ke-" << iteration 
                 << " di index " << mid << endl;
            return mid;
        }
        
        // Jika x lebih besar, abaikan bagian kiri
        if (arr[mid] < x) {
            cout << arr[mid] << " < " << x << " (cari kanan)" << endl;
            left = mid + 1;
        }
        // Jika x lebih kecil, abaikan bagian kanan
        else {
            cout << arr[mid] << " > " << x << " (cari kiri)" << endl;
            right = mid - 1;
        }
        
        iteration++;
    }
    
    cout << "================================================================" << endl;
    cout << "TIDAK DITEMUKAN setelah " << (iteration-1) << " iterasi" << endl;
    return -1;
}

int main() {
    cout << "=== LATIHAN 16 - SOAL 1 ===" << endl;
    cout << "Tabel Iterasi Binary Search" << endl;
    cout << "===========================\n" << endl;
    
    // Data array dari soal modul
    int arr[] = {5, 7, 12, 15, 17, 19, 22, 25, 27, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Data Array (sudah terurut):" << endl;
    cout << "Index: ";
    for (int i = 0; i < n; i++) {
        cout << i << "   ";
    }
    cout << "\nNilai: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (arr[i] < 10) cout << "   ";
        else cout << "  ";
    }
    cout << endl;
    
    // SOAL 1a: Mencari N = 17
    cout << "\n\n========================================" << endl;
    cout << "SOAL 1a: Mencari nilai N = 17" << endl;
    cout << "========================================" << endl;
    
    binarySearchWithTable(arr, n, 17);
    
    // SOAL 1b: Mencari N = 22
    cout << "\n\n========================================" << endl;
    cout << "SOAL 1b: Mencari nilai N = 22" << endl;
    cout << "========================================" << endl;
    
    binarySearchWithTable(arr, n, 22);
    
    return 0;
}