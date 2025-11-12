#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    double jarak;
    
    cout << "KOORDINAT 2 TITIK DAN JARAK" << endl;
    
    cout << "Masukkan koordinat titik A:" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    
    cout << "\nMasukkan koordinat titik B:" << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;
    
    jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    cout << endl << "HASIL PERHITUNGAN" << endl;
    cout << "Koordinat Titik A: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Koordinat Titik B: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Jarak antara A dan B: " << fixed << setprecision(2) << jarak << " satuan" << endl;
}
