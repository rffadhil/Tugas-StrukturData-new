#include <iostream>
using namespace std;

int main() {
    int Q[10];
    int L = 0, R = -1;
    int n = 10;
    int data;
    int count = 0;
    
    cout << "INSERT 10 RECORD DARI KANAN\n";
    
    while(count < 10 && R < n-1) {
        cout << "Data ke-" << (count+1) << ": ";
        cin >> data;
        
        R++;
        Q[R] = data;
        count++;
        
        cout << "Data ditambahkan (L=" << L << ", R=" << R << ")\n";
    }
    
    if(R == n-1) {
        cout << "\nPenuh Kanan! Proses dihentikan.\n";
    }
    
    cout << "Total data: " << count << "\n";
    
    return 0;
}
