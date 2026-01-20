#include <iostream>
#include <limits> // untuk numeric_limits
using namespace std;

int main() {

    //ini adalah bilangan bulat. 
    int a = 1; // 4 byte
    long b = 6; // 8 byte (harusnya, pakai "long long" agar pasti 8 byte)
    short c = 3; // 2 byte

    //bilangan desimal
    float d = 2.0;
    double e = 3.8;

    //character
    char f = 'a'; // 1 bit

    //boolean (true or false)
    bool g = false; // 1 bit

    cout << "ini adalah integer: ";
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl; // akan keluar 4 artinya 4 byte
    cout << numeric_limits<int>::min() << endl; // akan menunjukkan hasil minimum dari integer
    cout << numeric_limits<int>::max() << endl; // akan menunjukkan hasil maksismum dari integer
    
    cout << endl;
    
    cout << "ini adalah long: ";
    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;
    cout << numeric_limits<long>::min() << endl; // akan menunjukkan hasil minimum dari long
    cout << numeric_limits<long>::max() << endl; // akan menunjukkan hasil maksismum dari long
    
    cout << endl;

    cout << "ini adalah short: ";
    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;
    cout << numeric_limits<short>::min() << endl; // akan menunjukkan hasil minimum dari short
    cout << numeric_limits<short>::max() << endl; // akan menunjukkan hasil maksismum dari short

    cout << endl;


    // agar tidak ada negatif
    unsigned int h = 5;
    cout << "ini adalah unsigned integer: ";
    cout << h << endl;
    cout << sizeof(h) << " byte" << endl; // akan keluar 4 artinya 4 byte
    cout << numeric_limits<unsigned int>::min() << endl; // akan menunjukkan hasil minimum dari integer
    cout << numeric_limits<unsigned int>::max() << endl; // akan menunjukkan hasil maksismum dari integer

    cin.get();
    return 0;
}


/*

float: lebih hemat memori, cukup untuk angka desimal biasa.
double: lebih presisi, cocok untuk perhitungan yang butuh ketelitian tinggi 
        (misal: sains, keuangan, statistik).


| Tipe Data  | Ukuran Memori   | Presisi (jumlah angka desimal akurat) | Contoh Nilai      |
| ---------- | --------------- | ------------------------------------- | ----------------- |
| float      | 4 byte (32 bit) | ± 6–7 digit desimal                   | 3.141592          |
| double     | 8 byte (64 bit) | ± 15–16 digit desimal                 | 3.141592653589793 |

*/