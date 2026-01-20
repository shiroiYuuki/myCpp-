#include <iostream>
using namespace std;

int main() {
    //membuat array
    int nilai[5]; //= {0,1,2,3,4}; bisa juga seperti ini
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << nilai << endl; // yang keluar adalah addressnya bukan nilainya
    cout << &nilai[0] << endl; // sama seperti di atas ini akan mengambil addressnya
    
    cout << &nilai[0] << " Nilainy adalah " << nilai[0] << endl; // kalo kayak gini, untuk mengambil nilainya
    cout << &nilai[1] << " Nilainy adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainy adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainy adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainy adalah " << nilai[4] << endl;
    
    int *Ptr = nilai; // int *Ptr = nilai; bisa juga di baca sebagai int *Ptr = &nilai[0];
    *(Ptr + 2) = 6; // nilai ke 2 di ubah menjadi 6 menggunakan pointer

    nilai[3] = 7; // nilai ke 3 di ubah menjadi 7
    cout << endl;
    cout << &nilai[0] << " Nilainy adalah " << nilai[0] << endl; // kalo kayak gini, untuk mengambil nilainya
    cout << &nilai[1] << " Nilainy adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainy adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainy adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainy adalah " << nilai[4] << endl;
    cout << endl;

    // cara mengetahui ada berapa jumlah data di array
    cout << "ukuran array = " << sizeof(nilai) << " byte" << endl; // untuk mengetahui ukuran byte di dalam arraynya
    cout << "Jumlah member array adalah " << sizeof(nilai)/sizeof(int) << endl; // 5(member) : 4(byte integer)


    system("pause");
    return 0;
}

/*
array adalah kumpulan data, array gk cuman angka, jika array memakai memori dia akan menggunakannya 
secara berurutan, indeks nya di mulai dari 0, kalo deklarasinya persatuan maka akan di letakkan 
di memori secara sembarang.


*/
