#include <iostream>
using namespace std;

int main() {
	cout << "Array 2D: float x[5][8]" << endl;
    cout << "Diketahui: &x[0][0] = 1000 H" << endl;
    cout << "Ukuran float = 4 byte" << endl;
    cout << "Ditanya: &x[2][4] = ?" << endl;
    
    int alamat_x00 = 0x1000;
    int ukuran_float = 4;
    int kolom = 8;
    int alamat_x24 = alamat_x00 + ((2 * kolom + 4) * ukuran_float);
    
    cout << "Rumus: &x[2][4] = &x[0][0] + ((2 x 8 + 4) x ukuran float)" << endl;
    cout << "       &x[2][4] = 1000 H + (20 x 4)" << endl;
    cout << "       &x[2][4] = 1000 H + 50 H" << endl;
    cout << "Jawab: &x[2][4] = " << hex << alamat_x24 << " H" << endl << endl;
    
    return 0;
}
