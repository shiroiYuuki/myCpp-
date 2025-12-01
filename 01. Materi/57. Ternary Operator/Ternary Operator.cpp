#include <iostream>
#include <string>
using namespace std;

// ternary Operator = ? 
// kondisi ? hasil1 : hasil2
// wadah = (kondisi)? true : false

int main(){
    int nomor1, nomor2;
    string hasil1, hasil2, output;

    hasil1 = "True";
    hasil2 = "false";

    nomor1 = 6;

    output = (nomor1 < nomor2)? hasil1 : hasil2;
    cout << "Masukkan angka: ";
    cin >> nomor2;
    
    cout << "anda memilih angka " << nomor2 << " jadi " << output << " ";

    system("pause");
    return 0;
}

// (variable) = (kondisi) ? (nilai_jika_benar) : (nilai_jika_salah);
/*
=====
Setiap contoh Ternary Operator:

1. string hasil = (angka % 2 == 0) ? "Genap" : "Ganjil";   // jika angka habis di bagi 2 maka genap
2. string status = (nilai >= 75) ? "Lulus" : "Tidak lulus";
3. cout << ((login) ? "Selamat datang" : "Login gagal") << endl;
4. char grade = (nilai >= 90) ? 'A' :
                (nilai >= 80) ? 'B' :
                (nilai >= 70) ? 'C' : 'D';
5. int diskon = (isMember) ? 20 : 0;     // jika isMember true dia akan ambil 20 begitu pula sebaliknya


=====
*/