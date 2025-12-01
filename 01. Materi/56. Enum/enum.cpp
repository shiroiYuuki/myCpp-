#include <iostream>

using namespace std;

enum warna {ireng, merah, hijau, ungu, pink};
enum warnaKarbit {hitam, abuAbu, merahMzuda = 5, orange, putih};

int main(){
    warna baju;
    warnaKarbit kain;

    baju = ungu;
    kain = merahMzuda;
    if(baju == ungu){
        cout << "baju kamu ungu";
    }

    cout << "warna ungi ada di-"<< baju << endl; // akan keluar angka 3 karena ungu berada di posisi ke-3
    cout << "warna ungi ada di-"<< kain << endl; // akan keluar angka 3 karena ungu berada di posisi ke-3


    system("pause");

    return 0;
}

/*

nilainya enum tidak bisa diubah saat program berjalan.
=====
- Enum dibuat sekali, tidak bisa diubah lagi.
- Enum bukan variabel, tapi “daftar pilihan”
- Enum otomatis diberi angka (mulai dari 0)
- Enum disimpan sebagai integer
- Kalau mau kasih nilai khusus, lakukan saat membuat enum.
- Setelah enum didefinisikan, cuma bisa mengubah variabel yang memakai enum, bukan enum itu sendiri.
- User tidak bisa mengubah daftar enum
- Tapi user bisa memilih salah satu nilai enum
- Enum biasa bisa “bentrok nama”
- Enum bisa dipakai sebagai index array
=====

- Enum boleh tidak berurutan

enum warna {
    ireng = 10,
    merah = 99,
    hijau = 11,
    ungu = 500,
    pink = -3
};

=====

- Boleh gabungan otomatis + manual

enum warna {
    ireng = 10,
    merah,      // otomatis jadi 11
    hijau = 50,
    ungu,       // otomatis jadi 51
    pink        // otomatis jadi 52
};

*/