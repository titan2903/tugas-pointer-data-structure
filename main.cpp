#include <iostream>
using namespace std;

// Fungsi untuk memodifikasi nilai menggunakan pointer
void modifyValue(int* ptr) {
    *ptr = 800; // Memodifikasi nilai yang ditunjuk oleh pointer
}

int main() {
    int number = 40; // Mendeklarasikan variabel integer
    int* ptr = &number; // Mendeklarasikan pointer dan menyimpan alamat dari 'number'

    // Menampilkan nilai awal dan alamatnya
    cout << "Nilai awal dari number: " << number << endl;
    cout << "Alamat dari number: " << &number << endl;

    // Memanggil fungsi untuk memodifikasi nilai
    modifyValue(ptr);

    // Menampilkan nilai yang telah dimodifikasi
    cout << "Nilai yang telah dimodifikasi dari number: " << number << endl;

    return 0;
}