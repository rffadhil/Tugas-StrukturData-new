#include <iostream>
using namespace std;

int main() {
    int Q[100];
    int F = 0, R = -1;
    int data;
    
    cout << "Isi queue (ketik -1 untuk berhenti):\n";
    while(R < 99) {
        cout << "Data: ";
        cin >> data;
        if(data == -1) break;
        
        R++;
        Q[R] = data;
    }
    
    cout << "\nDELETE 10 RECORD\n";
    int count = 0;
    
    while(count < 10 && F < R+1) {
        cout << "Data " << Q[F] << " dihapus (F = " << F << ")\n";
        F++;
        count++;
    }
    
    if(F == R+1) {
        cout << "\nQueue Kosong!\n";
    }
    
    cout << "Total data dihapus: " << count << "\n";
    
    return 0;
}
