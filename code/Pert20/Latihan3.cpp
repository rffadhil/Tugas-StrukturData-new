#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, langkah = 0;
    while (low <= high) {
        langkah++;
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Ditemukan dalam " << langkah << " langkah\n";
            return mid;
        }
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "Tidak ditemukan, langkah: " << langkah << endl;
    return -1;
}

int main() {
    int data[15] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
    binarySearch(data, 15, 18);
    return 0;
}

