#include <iostream>
using namespace std;

int main() {
    int Q[100];
    int F = 0, R = -1;
    int n = 100;
    int data;
    int count = 0;
    
    cout << "INSERT 10 RECORD KE QUEUE\n";
    
    while(count < 10 && R < n-1) {
        cout << "Data ke-" << (count+1) << ": ";
        cin >> data;
        
        R++;
        Q[R] = data;
        count++;
        cout << "Data ditambahkan (R = " << R << ")\n";
    }
    
    if(R == n-1) {
        cout << "\nQueue Penuh!\n";
    }
    
    cout << "Total data: " << count << "\n";
    
    return 0;
}
