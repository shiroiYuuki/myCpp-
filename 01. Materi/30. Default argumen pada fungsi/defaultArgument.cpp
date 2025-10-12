#include <iostream>
using namespace std;

// fungsi prototipe
double volumeKubus(double p, double l, double t = 1);


int main(){
    cout << "volume kubus: " << volumeKubus(3, 4, 5) << endl;
    cout << "volume kubus: " << volumeKubus(3, 4) << endl;

    system("pause");
    return 0;
}

// default argument atau nilai standarnya
double volumeKubus(double p, double l, double t){
    return p * l * t;
}





// ===============================================
// Catatan: Default Argument pada Fungsi
// ===============================================
//
// Pengertian:
// Default argument adalah nilai bawaan otomatis
// yang digunakan oleh parameter fungsi jika tidak diberikan nilai
// saat fungsi dipanggil.
//
// Logika sederhananya:
// - Jika kita kasih nilai → pakai nilai yang kita kirim
// - Jika tidak → pakai nilai default dari fungsi
//
// -----------------------------------------------
// Contoh:
//
// void sapa(string nama = "Pengunjung") {
//     cout << "Halo, " << nama << "!" << endl;
// }
//
// int main() {
//     sapa("Shiroko");   // Output: Halo, Shiroko!
//     sapa();            // Output: Halo, Pengunjung!  ← pakai default
// }
//
// -----------------------------------------------
// 🧱 Aturan penting:
// 1.  Default argument hanya boleh ditulis di **deklarasi (prototype)** 
//     atau **definisi fungsi**, tidak keduanya.
// 2.  Parameter yang punya default harus diletakkan di **bagian kanan**.
//
// Contoh salah ❌:
// void contoh(int a = 5, int b);   // Error, karena b tidak punya default
//
// Contoh benar ✅:
// void contoh(int a, int b = 5);
//
// -----------------------------------------------
// Kegunaan:
// - Membuat fungsi lebih fleksibel dan ringkas
// - Tidak perlu menulis banyak overload function
//
// ===============================================
