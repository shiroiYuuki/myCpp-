#include <iostream>
using namespace std;

int main(){
    // variable
    int a = 5;

    cout << "address dari a adalah: " << &a << endl;
    cout << "nilai dari a adalah: " << a << endl << endl;

    int &b = a; // jadi b memiliki lokasi memori yang sama dengan "a" jika nilai b berubah maka nilai a juga akan mengikuti nya juga
    cout << "nilai dari b adalah: " << b << endl;
    cout << "address dari b adalah: " << &b << endl << endl;

    b = 78; // jika b berubah maka si a juga berubah
    cout << "nilai b saat ini adalah: " << b << endl;
    cout << "nilai a saat ini adalah: " << a << endl << endl;
    
    a = 97; // jika a berubah maka b juga berubah
    cout << "nilai b saat ini adalah: " << b << endl;
    cout << "nilai a saat ini adalah: " << a << endl << endl;

    system("pause");
    return 0;
}


/*
======================
tidak bisa kayak gini:

int &b = &a;

karena '&' di kiri dan '&' di kanan itu artinya beda. Di kiri int &b 
itu artinya: b itu julukan lain (alias) dari variabel lain yang bertipe int.
Kayak bilang “b ini nama panggilan buat a.

Di kanan:
'&a' Artinya: ambil alamat dari a.
Hasilnya bukan angka int, tapi alamat (pointer).
======================
Reference (&) itu buat kasih nama lain ke variabel,
bukan buat nyimpen alamat kayak pointer.

*/