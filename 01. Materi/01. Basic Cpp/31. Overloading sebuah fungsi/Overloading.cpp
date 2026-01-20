#include <iostream>
using namespace std;

// Overloading = menimpa

// basic function
int luasKotak(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

// overload function
int luasKotak(int sisi){
    int luas = sisi * sisi; // jika user cuman memasukkan 1 data maka ini yang di ambil
    return luas;
}

double luasKotak(double sisi){
    return sisi * sisi; // jika user memasukkan angka yang ada koma nya maka yang di ambil adalah yang ini :3
}

int main(){
    cout << "Luas Kotak adalah 2 x 3: " << luasKotak(2,3) << endl;
    cout << "Luas Kotak adalah 2 x 2: " << luasKotak(2) << endl;
    cout << "Luas Kotak adalah 2.5 x 2.5: " << luasKotak(2.5) << endl;

    system("pause");
    return 0;
}



// =====================================================
// Catatan: FUNCTION OVERLOADING (FUNGSI DENGAN NAMA SAMA)
// =====================================================
//
// Pengertian:
// Function Overloading adalah fitur di C++ yang memungkinkan
// kita membuat beberapa fungsi **dengan nama yang sama**,
// tapi **parameter-nya berbeda**.
//
// Tujuan:
// Agar kita bisa melakukan "fungsi yang mirip"
// tanpa harus bikin nama berbeda untuk tiap kasus.
//
// -----------------------------------------------------
// Contoh sederhana:
//
// void tampil(int angka) {
//     cout << "Angka: " << angka << endl;
// }
//
// void tampil(string teks) {
//     cout << "Teks: " << teks << endl;
// }
//
// int main() {
//     tampil(10);          // Memanggil versi int
//     tampil("Halo Bro!"); // Memanggil versi string
//     return 0;
// }
//
// -----------------------------------------------------
// Aturan Function Overloading:
// 1. Nama fungsi harus sama.
// 2. Jumlah parameter atau tipe datanya harus beda.
// 3. Return type tidak cukup untuk membedakan.
//
// -----------------------------------------------------
// Contoh yang SALAH:
//
// int hitung(int a, int b);
// double hitung(int x, int y); // ERROR, cuma beda return type
//
// Karena compiler C++ hanya melihat nama fungsi + parameter,
// bukan tipe data yang dikembalikan.
//
// -----------------------------------------------------
// Contoh lebih lengkap:
//
// // Menjumlah dua angka (int)
// int tambah(int a, int b) {
//     return a + b;
// }
//
// // Menjumlah tiga angka (int)
// int tambah(int a, int b, int c) {
//     return a + b + c;
// }
//
// // Menjumlah dua angka desimal (double)
// double tambah(double a, double b) {
//     return a + b;
// }
//
// int main() {
//     cout << tambah(3, 4) << endl;        // versi int (2 parameter)
//     cout << tambah(3, 4, 5) << endl;     // versi int (3 parameter)
//     cout << tambah(2.5, 3.7) << endl;    // versi double
// }
//
// -----------------------------------------------------
// Kegunaan nyata:
// - Membuat kode lebih rapi dan mudah dibaca
// - Bisa menangani berbagai tipe input tanpa ganti nama fungsi
//
// -----------------------------------------------------
// Kesimpulan:
// Function overloading = fungsi dengan nama sama,
// tapi parameter berbeda (jumlah / tipe).
// Compiler yang memilih mana yang dipakai.
//
// =====================================================
