#include <iostream>
using namespace std;

// Implementasi Binary Search sesuai algoritma
int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Jika elemen ditemukan di tengah
        if (arr[mid] == x)
            return mid;
        
        // Jika x lebih besar, abaikan setengah kiri
        if (arr[mid] < x)
            left = mid + 1;
        
        // Jika x lebih kecil, abaikan setengah kanan
        else
            right = mid - 1;
    }
    
    // Jika elemen tidak ditemukan
    return -1;
}

int main() {
    cout << "=== LATIHAN 16 - SOAL 2 ===" << endl;
    cout << "Algoritma Binary Search" << endl;
    cout << "=======================\n" << endl;
    
    cout << "ALGORITMA BINARY SEARCH:" << endl;
    cout << "========================\n" << endl;
    
    cout << "Input: arr[] (array terurut), n (ukuran array), x (nilai dicari)" << endl;
    cout << "Output: index dari x jika ditemukan, -1 jika tidak ditemukan\n" << endl;
    
    cout << "Langkah-langkah:" << endl;
    cout << "1. Inisialisasi left = 0, right = n - 1" << endl;
    cout << "2. Selama left <= right, lakukan:" << endl;
    cout << "   a. Hitung mid = left + (right - left) / 2" << endl;
    cout << "   b. Jika arr[mid] == x:" << endl;
    cout << "      - Return mid (elemen ditemukan)" << endl;
    cout << "   c. Jika arr[mid] < x:" << endl;
    cout << "      - Set left = mid + 1 (cari di bagian kanan)" << endl;
    cout << "   d. Jika arr[mid] > x:" << endl;
    cout << "      - Set right = mid - 1 (cari di bagian kiri)" << endl;
    cout << "3. Jika keluar dari loop:" << endl;
    cout << "   - Return -1 (elemen tidak ditemukan)" << endl;
    
    cout << "\n\nKOMPLEKSITAS:" << endl;
    cout << "- Waktu   : O(log n)" << endl;
    cout << "- Ruang   : O(1)" << endl;
    
    cout << "\n\nKEUNGGULAN:" << endl;
    cout << "- Sangat efisien untuk array besar" << endl;
    cout << "- Mengurangi ruang pencarian setengahnya setiap iterasi" << endl;
    
    cout << "\n\nSYARAT:" << endl;
    cout << "- Array HARUS sudah terurut" << endl;
    
    // Demo penggunaan
    cout << "\n\n========================================" << endl;
    cout << "DEMO ALGORITMA BINARY SEARCH" << endl;
    cout << "========================================" << endl;
    
    int arr[] = {5, 7, 12, 15, 17, 19, 22, 25, 27, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "\nData Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int x;
    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> x;
    
    int result = binarySearch(arr, n, x);
    
    if (result != -1) {
        cout << "\nHasil: Nilai " << x << " ditemukan pada index " << result << endl;
    } else {
        cout << "\nHasil: Nilai " << x << " tidak ditemukan dalam array" << endl;
    }
    
    return 0;
}