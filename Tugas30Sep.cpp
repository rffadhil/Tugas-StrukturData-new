#include <iostream>
#include <string>

// Kelas Induk: Siswa
class Siswa {
    protected:
        std::string nama;
        std::string kelas;
        int nilai;

    public:
    //Konstruktor
    Siswa(std::string nama, std::string kelas, int nilai) {
        this->nama = nama;
        this->kelas = kelas;
        this->nilai = nilai;
    };
    // Mteode untuk menampilkan informasi dasar siswa
    void tampilkanInfo() {
        std::cout << this->nama << std::endl;
        std::cout << this->kelas << std::endl;
        std::cout << this->nilai << std::endl;
    }
};

// Subkelas: Siswa IT, mewarisi dari siswa
class SiswaIT : public Siswa {
    private:
        std::string programStudi;

    public:
        //konstruktor subkelas
        SiswaIT(std::string nama, std::string kelas, int nilai, std::string programStudi)
        	: Siswa(nama, kelas, nilai) {
                // Memanggil konstruktor kelas induk
                this->programStudi = programStudi;
            }
        // Metoded menampilkan semua informasi
        void tampilkanInfoLengkap () {
            // Memanggil metode dari kelas induk untuk menampilkan info dasar
            tampilkanInfo ();
            // Menampilkan informasai tambahan
            std::cout<< "Program Studi: " <<this->programStudi<<std::endl;
        }
};

int main () {
    // membuat objek dari sebkelas siswa IT
    SiswaIT siswa_it_baru("Doni", "12A", 92, "Sistem Informasi");

    // Memanggil metode untuk menampilkan semua informasi
    std::cout <<"---Data Siswa Baru---" << std::endl;
    siswa_it_baru.tampilkanInfoLengkap();

    return 0;
}
