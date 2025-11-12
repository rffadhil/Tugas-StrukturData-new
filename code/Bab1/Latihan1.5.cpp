#include <iostream>
using namespace std;

int main() {
    int A, B, temp;
    
    cout << "MENUKAR NILAI A DAN B" << endl;
    
    cout << "Masukkan 2 bilangan bulat:" << endl;
    cout << "Nilai A: ";
    cin >> A;
    cout << "Nilai B: ";
    cin >> B;
    
    cout << endl << "SEBELUM PENUKARAN" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    
    temp = A;
    A = B;
    B = temp;

    cout << endl << "KESIMPULAN" << endl;
    cout << "Nilai akhir   : A = " << A << ", B = " << B << endl;

    return 0;
}
