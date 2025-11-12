#include <iostream>
using namespace std;

int main() {
	cout << "Array 2D: long x[12][14]" << endl;
    cout << "Diketahui: &x[0][0] = 1000 H" << endl;
    cout << "Ukuran long = 8 byte" << endl;
    cout << "Ditanya: &x[2][4] = ?" << endl;
    
    int alamat_long00 = 0x1000; 
    int ukuran_long = 8;
    int kolom_long = 14;
    int alamat_long24 = alamat_long00 + ((2 * kolom_long + 4) * ukuran_long);
    
    cout << "Rumus: &x[2][4] = &x[0][0] + ((2 x 14 + 4) x ukuran_long)" << endl;
    cout << "       &x[2][4] = 1000 H + (32 x 8)" << endl;
    cout << "       &x[2][4] = 1000 H + 100 H" << endl;
    cout << "Jawab: &x[2][4] = " << hex << alamat_long24 << " H" << endl << endl;
    
    return 0;
}
