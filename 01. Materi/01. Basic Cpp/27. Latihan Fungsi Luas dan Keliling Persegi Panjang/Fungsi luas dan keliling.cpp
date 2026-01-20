#include <iostream>
using namespace std;

// fungsi menghitung luas persegi panjang
double menghitungLuas(double panjang, double lebar){
    double luas = panjang * lebar;
    return luas;
}

// fungsi menghitung keliling persegi panjang
double menghitungKeliling(double panjang, double lebar){
    double keliling = 2 * (panjang + lebar);
    return keliling;
}

// tampilkan luas
void tampilkanLuas(double panjang, double lebar){
    cout << "luasnya adalah: " << menghitungLuas(panjang, lebar) << endl;
}

// tampilkan keliling
void tampilkanKeliling(double kiri, double kanan){ // double kiri, double kanan nya bisa di ubah, tidak wajib mengikuti atasnya
    cout << "luasnya adalah: " << menghitungKeliling(kiri, kanan) << endl;
}


int main(){
    double panjang, lebar;

    cout << "masukkan panjangnya: ";
    cin >> panjang;
    
    cout << "masukkan lebarnya: ";
    cin >> lebar;


    tampilkanLuas(panjang, lebar); // memanggil fungsi tampilkanLuas (Void)
    tampilkanKeliling(panjang, lebar);
    system("pause");
    return 0;
}