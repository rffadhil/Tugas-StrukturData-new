#include <iostream>
using namespace std;

int main() {
    double lebar, tinggi;
    double area, keliling;
    
    cout << "PERHITUNGAN PERSEGI PANJANG" << endl;
    
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    cout << "Masukkan tinggi persegi panjang: ";
    cin >> tinggi;
    
    area = lebar * tinggi;
    keliling = 2 * (lebar + tinggi);
    
    cout << endl << "HASIL PERHITUNGAN" << endl;
    cout << "Lebar: " << lebar << " satuan" << endl;
    cout << "Tinggi: " << tinggi << " satuan" << endl;
    cout << "Area: " << area << " satuan persegi" << endl;
    cout << "Keliling: " << keliling << " satuan" << endl;
}
