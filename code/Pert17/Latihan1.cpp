#include <iostream>
using namespace std;

// Bubble Sort dengan perhitungan operasi
void bubbleSort(int arr[], int n, bool showProcess = true) {
    int comparisons = 0;
    int swaps = 0;
    
    if (showProcess) {
        cout << "Array awal: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl << endl;
    }
    
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        if (showProcess) cout << "Pass " << (i+1) << ": ";
        
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                swapped = true;
            }
        }
        
        if (showProcess) {
            for (int k = 0; k < n; k++) cout << arr[k] << " ";
            cout << endl;
        }
        
        // Optimisasi: jika tidak ada swap, array sudah terurut
        if (!swapped) {
            if (showProcess) cout << "Array sudah terurut!" << endl;
            break;
        }
    }
    
    cout << "\nTotal perbandingan: " << comparisons << endl;
    cout << "Total swap: " << swaps << endl;
}

int main() {
    cout << "=== LATIHAN 17 - SOAL 1 ===" << endl;
    cout << "Kompleksitas Waktu Terbaik Bubble Sort" << endl;
    cout << "======================================\n" << endl;
    
    cout << "PERTANYAAN:" << endl;
    cout << "Apa kompleksitas waktu terbaik bubble sort?" << endl;
    cout << "a. N^2" << endl;
    cout << "b. NLogN" << endl;
    cout << "c. N" << endl;
    cout << "d. N(LogN)^2" << endl;
    
    cout << "\n\nJAWABAN: c. N" << endl;
    
    cout << "\n\nPENJELASAN:" << endl;
    cout << "============" << endl;
    cout << "Kompleksitas waktu Bubble Sort:" << endl;
    cout << "- Kasus Terbaik  : O(n)   - array sudah terurut" << endl;
    cout << "- Kasus Rata-rata: O(n^2) - array acak" << endl;
    cout << "- Kasus Terburuk : O(n^2) - array terurut terbalik" << endl;
    
    cout << "\n\nKasus terbaik terjadi ketika array SUDAH TERURUT." << endl;
    cout << "Algoritma hanya perlu 1 pass untuk mengecek bahwa" << endl;
    cout << "tidak ada elemen yang perlu di-swap." << endl;
    cout << "Jumlah operasi = n-1 perbandingan = O(n)" << endl;
    
    // Demo kasus terbaik
    cout << "\n\n========================================" << endl;
    cout << "DEMO KASUS TERBAIK (Array Sudah Terurut)" << endl;
    cout << "========================================" << endl;
    
    int best[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    
    cout << "Array: ";
    for (int i = 0; i < n1; i++) cout << best[i] << " ";
    cout << endl << endl;
    
    bubbleSort(best, n1);
    
    cout << "\nHanya butuh 1 pass = 4 perbandingan = O(n)" << endl;
    
    // Demo kasus terburuk
    cout << "\n\n========================================" << endl;
    cout << "DEMO KASUS TERBURUK (Array Terbalik)" << endl;
    cout << "========================================" << endl;
    
    int worst[] = {5, 4, 3, 2, 1};
    int n2 = 5;
    
    cout << "Array: ";
    for (int i = 0; i < n2; i++) cout << worst[i] << " ";
    cout << endl << endl;
    
    bubbleSort(worst, n2);
    
    cout << "\nButuh banyak pass dan swap = O(n^2)" << endl;
    
    // Demo kasus rata-rata
    cout << "\n\n========================================" << endl;
    cout << "DEMO KASUS RATA-RATA (Array Acak)" << endl;
    cout << "========================================" << endl;
    
    int avg[] = {3, 1, 4, 2, 5};
    int n3 = 5;
    
    cout << "Array: ";
    for (int i = 0; i < n3; i++) cout << avg[i] << " ";
    cout << endl << endl;
    
    bubbleSort(avg, n3);
    
    return 0;
}