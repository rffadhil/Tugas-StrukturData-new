#include <iostream>
using namespace std;

int main() {
    int nilaiPertama;      
    char nilaiKedua;       
    float nilaiKetiga;    
    
    cout << "Input: ";
    cin >> nilaiPertama >> nilaiKedua >> nilaiKetiga;
    
    cout << nilaiPertama << endl;  
    cout << nilaiKedua << endl;    
    cout << nilaiKetiga << endl;   
    
    cout << endl << "ANALISIS TIPE DATA" << endl;
    cout << "Ukuran dari int : " << sizeof(int) << " bytes" << endl;
    cout << "Ukuran dari char : " << sizeof(char) << " byte" << endl;
    cout << "Ukuran dari float : " << sizeof(float) << " bytes" << endl;
    
    cout << endl << "Nilai " << nilaiPertama << " disimpan dalam tipe integer" << endl;
    cout << "Nilai " << nilaiKedua << " disimpan dalam tipe karakter" << endl;
    cout << "Nilai " << nilaiKetiga << " disimpan dalam tipe float" << endl;
    
    return 0;
}
