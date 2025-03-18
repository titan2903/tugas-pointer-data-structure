# Pointer di Bahasa Pemrograman C++

## Definisi Pointer

**Pointer adalah variabel yang berisi alamat memori dari variabel lain, bukan nilai langsung. Variabel tersebut dapat bertipe int, float, char, dll. Dengan mereferensikan alamat memori ini, programmer dapat mengakses dan memodifikasi data secara tidak langsung.**

## Contoh Code

Berikut contoh code sederhana penggunaan pointer di bahasa pemrograman C++:

```cpp
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
```

## Cara Menjalankan Kode C++ dengan Pointer

Kode C++ ini mendemonstrasikan penggunaan pointer untuk memodifikasi nilai variabel. Berikut adalah langkah-langkah untuk menjalankan kode ini:

### Prasyarat

- Compiler C++: Pastikan Anda memiliki compiler C++ yang terinstal di sistem Anda. Beberapa compiler populer adalah GCC (GNU Compiler Collection) atau Clang.
- Text Editor: Anda memerlukan text editor untuk menulis dan menyimpan kode C++.

### Langkah-langkah

1. Simpan Kode:
   - Buka text editor Anda.
   - Salin dan tempel kode C++ yang diberikan ke dalam text editor.
   - Simpan file dengan ekstensi .cpp, misalnya main.cpp.
2. Kompilasi Kode:
   - Buka terminal atau command prompt.
   - Navigasi ke direktori tempat Anda menyimpan file main.cpp.
   - Gunakan compiler C++ untuk mengkompilasi kode. Misalnya, jika Anda menggunakan GCC, jalankan perintah berikut:

    ```bash
    g++ main.cpp -o result
    ```

   - Perintah ini akan menghasilkan file executable bernama result (atau result.exe di Windows).
3. Jalankan Program:
   - Setelah kompilasi berhasil, jalankan program dengan perintah:

    ```bash
    ./result
    ```

    - Di Windows:

    ```bash
    result.exe
    ```

4. Output yang Diharapkan:
    - Setelah menjalankan program, Anda akan melihat output berikut di terminal:
  
    ```txt
    Nilai awal dari number: 40
    Alamat dari number: 0x[alamat_memori]
    Nilai yang telah dimodifikasi dari number: 800
    ```

    - Catatan: 0x[alamat_memori] akan berbeda-beda tergantung pada sistem Anda.

### Penjelasan Kode

- Kode ini mendemonstrasikan bagaimana pointer dapat digunakan untuk mengakses dan memodifikasi nilai variabel secara langsung melalui alamat memorinya.
- int* ptr = &number; bagian ini mendeklarasikan sebuah variabel pointer bernama ptr, lalu memberikan alamat dari variabel number kepada variabel pointer ptr.
- Fungsi modifyValue menerima pointer sebagai argumen dan memodifikasi nilai yang ditunjuk oleh pointer tersebut.
- Di dalam fungsi main, nilai variabel number diubah melalui pointer ptr menggunakan fungsi modifyValue.

Dengan mengikuti langkah-langkah di atas, Anda dapat menjalankan dan memahami kode C++ yang menggunakan pointer. Semoga membantu!
