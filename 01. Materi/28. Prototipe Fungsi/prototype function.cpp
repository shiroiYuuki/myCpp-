#include <iostream>
using namespace std;

// prototype = mendeklarasikan function di awal
double hitungLuas(double p, double l);
void println(double x);


int main(){
    double panjang, lebar, luas;
    cin >> panjang;
    cin >> lebar;

    luas = hitungLuas(panjang, lebar);

    println(luas);

    system("pause");
    return 0;
}

double hitungLuas(double p, double l) {
    return p * l;
}

void println(double x){
    cout << "hasilnya adalah: " << x << endl;
}



// ===============================================
// Catatan: Prototype Fungsi (Function Prototype)
// ===============================================
//
// Pengertian:
// Prototype fungsi adalah deklarasi awal dari sebuah fungsi
// yang memberi tahu compiler:
// - Nama fungsi
// - Tipe data yang dikembalikan (return type)
// - Tipe data parameter yang digunakan
//
// Tujuan utamanya:
// Agar compiler tahu struktur fungsi
// sebelum fungsi itu benar-benar didefinisikan di bawah.
//
// -----------------------------------------------
// Contoh sederhana:
//
// // ← Prototype (deklarasi di awal)
// double hitungLuas(double p, double l);
//
// int main() {
//     double hasil = hitungLuas(5, 3);
//     cout << hasil << endl;
//     return 0;
// }
//
// // ← Definisi fungsi (isi logikanya di bawah)
// double hitungLuas(double p, double l) {
//     return p * l;
// }
//
// -----------------------------------------------
// Kenapa perlu Prototype?
// -  Karena C++ membaca kode dari atas ke bawah.
// -  Jadi, kalau fungsi dipanggil sebelum dibuat,
//    compiler tetap tahu seperti apa bentuknya.
//
// Tanpa prototype:
//
// int main() {
//     cout << hitungLuas(5, 3);  // Error! Fungsi belum dikenal
// }
//
// double hitungLuas(double p, double l) { return p * l; }
//
// -----------------------------------------------
// Fungsi Prototype vs Definisi
//
// Prototype = "janji"
// → kasih tahu compiler “nanti ada fungsi ini loh”
//
// Definisi = "penuhi janji"
// → isi sebenarnya dari fungsi
//
// -----------------------------------------------
// 📎 Catatan Tambahan:
// - Prototype biasanya ditaruh di atas `main()`
// - Bisa juga disimpan di file header (.h)
//
// -----------------------------------------------
// Kesimpulan:
// Prototype fungsi = cara C++ mengenali fungsi
// sebelum digunakan, agar tidak error.
//
// ===============================================
