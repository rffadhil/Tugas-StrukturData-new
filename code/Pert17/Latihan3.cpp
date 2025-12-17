#include <iostream>
using namespace std;

// Bubble Sort dengan detail setiap swap
int bubbleSortDetailSwap(int arr[], int n) {
    int swapCount = 0;
    int swapNumber = 1;
    
    cout << "Array awal: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl << endl;
    
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        cout << "========== Pass " << (i+1) << " ==========" << endl;
        
        for (int j = 0; j < n - i - 1; j++) {
            cout << "Bandingkan arr[" << j << "]=" << arr[j] 
                 << " dengan arr[" << (j+1) << "]=" << arr[j+1];
            
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapCount++;
                
                cout << " -> SWAP ke-" << swapNumber++ << endl;
                cout << "   Hasil: ";
                for (int k = 0; k < n; k++) cout << arr[k] << " ";
                cout << endl;
                
                swapped = true;
            } else {
                cout << " -> tidak swap" << endl;
            }
        }
        
        cout << "Setelah Pass " << (i+1) << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << endl << endl;
        
        if (!swapped) {
            cout << "Tidak ada swap, array sudah terurut!" << endl;
            break;
        }
    }
    
    return swapCount;
}

int main() {
    cout << "=== LATIHAN 17 - SOAL 3 ===" << endl;
    cout << "Jumlah Swapping untuk Mengurutkan Array" << endl;
    cout << "========================================\n" << endl;
    
    cout << "PERTANYAAN:" << endl;
    cout << "Jumlah swappings yang diperlukan untuk menyortir angka" << endl;
    cout << "8, 22, 7, 9, 31, 5, 13" << endl;
    cout << "dalam urutan menaik, menggunakan bubble sort adalah..." << endl << endl;
    
    cout << "a. 11" << endl;
    cout << "b. 12" << endl;
    cout << "c. 13" << endl;
    
    cout << "\n\n========================================" << endl;
    cout << "PROSES PERHITUNGAN" << endl;
    cout << "========================================\n" << endl;
    
    int arr[] = {8, 22, 7, 9, 31, 5, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int totalSwaps = bubbleSortDetailSwap(arr, n);
    
    cout << "\n========================================" << endl;
    cout << "HASIL" << endl;
    cout << "========================================" << endl;
    cout << "Array terurut: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    cout << "\nTotal swapping yang diperlukan: " << totalSwaps << endl;
    
    cout << "\n\nJAWABAN: " << totalSwaps << " swapping" << endl;
    
    // Penjelasan tambahan
    cout << "\n\n========================================" << endl;
    cout << "PENJELASAN" << endl;
    cout << "========================================" << endl;
    cout << "Bubble Sort membandingkan elemen bersebelahan dan" << endl;
    cout << "menukar jika tidak dalam urutan yang benar." << endl;
    cout << "\nSetiap pass, elemen terbesar 'menggelembung' ke akhir." << endl;
    cout << "Proses berlanjut sampai tidak ada lagi swap yang diperlukan." << endl;
    
    return 0;
}