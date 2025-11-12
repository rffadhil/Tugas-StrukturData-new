#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top = -1;
    int data;
    
    cout << "Masukkan data (999 untuk selesai):\n";
    
    while(true) {
        cout << "Data: ";
        cin >> data;
        
        if(data == 999) {
            cout << "Selesai.\n";
            break;
        }
        
        if(data >= 60) {
            if(top < 9) {
                top++;
                S[top] = data;
                cout << "Data " << data << " ditambahkan\n";
            } else {
                cout << "Stack Penuh\n";
                break;
            }
        } else {
            if(top > -1) {
                cout << "Data " << S[top] << " dikeluarkan\n";
                top--;
            } else {
                cout << "Stack Kosong\n";
                break;
            }
        }
    }
    
    return 0;
}
