#include <iostream>
using namespace std;

//fungsi rekursif terbatas
int pangkatIterasi(int angka, int pangkat){
    int hasil = angka; 
    for(int i = 1; i < pangkat; i++){ 
        hasil = hasil * angka; 
    }
    return hasil;
}

// fungsi rekursif = fungsi yang mengulang dirinya sendiri
int pangkatRekursif(int angka, int pangkat){
    if(pangkat <= 1){
        cout << "akhir dari rekursif \n";
        return angka;
    } else {
        cout << "rekursif \n";
        return angka * pangkatRekursif(angka,(pangkat - 1));
    }
}


int main(){
    int angka, pangkat;
    cout << "masukkan angka: ";
    cin >> angka;
    cout << "masukkan pangkat: ";
    cin >> pangkat;
    cout << "hasil dari iterasi " << pangkatIterasi(angka, pangkat) << endl;
    cout << "hasil dari Rekursif " << pangkatRekursif(angka, pangkat) << endl;

    system("pause");
    return 0;
}







/* 

Fungsi rekursif = fungsi yang memanggil dirinya sendiri.
Base case = kondisi berhenti agar tidak infinite loop.
Recursive case = bagian di mana fungsi memanggil dirinya dengan nilai yang lebih kecil.

Ada dua bagian penting dalam setiap recursive function:
1. Base case = Kondisi berhenti agar rekursi tidak berjalan terus tanpa akhir.
2. Recursive case = Bagian di mana fungsi memanggil dirinya sendiri untuk memecahkan masalah yang lebih kecil.


https://youtu.be/kepBmgvWNDw?si=wbcoRTRcJDiPXM5Y
*/