#include <iostream>
using namespace std;

int main() {
    int Q[10];
    int F = 0, R = -1, COUNTER = 0;
    int n = 10;
    int data;
    int count = 0;
    
    cout << "INSERT 10 RECORD KE CIRCULAR QUEUE\n";
    
    while(count < 10 && COUNTER < n) {
        cout << "Data ke-" << (count+1) << ": ";
        cin >> data;
        
        R = (R + 1) % n;
        Q[R] = data;
        COUNTER++;
        count++;
        
        cout << "Data ditambahkan (F=" << F << ", R=" << R << ", COUNTER=" << COUNTER << ")\n";
    }
    
    if(COUNTER == n) {
        cout << "\nQueue Penuh!\n";
    }
    
    cout << "Total data: " << COUNTER << "\n";
    
    return 0;
}
