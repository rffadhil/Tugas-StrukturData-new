#include <iostream>
using namespace std;

struct SIMPUL {
    float INFO;
    SIMPUL* LINK;
};

int main() {
    SIMPUL *FIRST = NULL, *LAST = NULL, *P, *Q;
    float data;
    
    cout << "Isi linked list (ketik -1 untuk berhenti):\n";
    
    while(true) {
        cout << "Data: ";
        cin >> data;
        if(data == -1) break;
        
        P = new SIMPUL;
        P->INFO = data;
        P->LINK = NULL;
        
        if(FIRST == NULL) {
            FIRST = P;
            LAST = P;
        } else {
            LAST->LINK = P;
            LAST = P;
        }
    }
    
    // a. Menghitung jumlah simpul
    int jumlahSimpul = 0;
    Q = FIRST;
    while(Q != NULL) {
        jumlahSimpul++;
        Q = Q->LINK;
    }
    cout << "\na. Jumlah simpul: " << jumlahSimpul << "\n";
    
    // b. Menghitung total INFO
    float totalINFO = 0;
    Q = FIRST;
    while(Q != NULL) {
        totalINFO += Q->INFO;
        Q = Q->LINK;
    }
    cout << "b. Total INFO: " << totalINFO << "\n";
    
    // c. Mencetak semua INFO
    cout << "c. Semua nilai INFO: ";
    Q = FIRST;
    while(Q != NULL) {
        cout << Q->INFO << " ";
        Q = Q->LINK;
    }
    cout << "\n";
    
    // d. Jumlah simpul dengan INFO = 50
    int jumlahINFO50 = 0;
    Q = FIRST;
    while(Q != NULL) {
        if(Q->INFO == 50) {
            jumlahINFO50++;
        }
        Q = Q->LINK;
    }
    cout << "d. Jumlah simpul dengan INFO=50: " << jumlahINFO50 << "\n";
    
    return 0;
}
