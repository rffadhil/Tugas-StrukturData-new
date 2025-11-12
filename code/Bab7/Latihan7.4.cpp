#include <iostream>
using namespace std;

int main() {
    int Q[10];
    int F = 0, R = -1, COUNTER = 0;
    int n = 10;
    int data;
    
    cout << "Isi queue dulu (ketik -1 untuk berhenti):\n";
    while(COUNTER < n) {
        cout << "Data: ";
        cin >> data;
        if(data == -1) break;
        
        R = (R + 1) % n;
        Q[R] = data;
        COUNTER++;
    }
    
    cout << "\nDELETE 10 RECORD\n";
    int count = 0;
    
    while(count < 10 && COUNTER > 0) {
        cout << "Data " << Q[F] << " dihapus (F=" << F << ", COUNTER=" << COUNTER << ")\n";
        F = (F + 1) % n;
        COUNTER--;
        count++;
    }
    
    if(COUNTER == 0) {
        cout << "\nQueue Kosong!\n";
    }
    
    cout << "Total data dihapus: " << count << "\n";
    
    return 0;
}
