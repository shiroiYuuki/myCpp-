#include <iostream>
using namespace std;
#include <cstdlib> 

int main() {
    int inputPertama, inputKedua;
    int hasil;

    cout << "silahkan masukkan angka yang anda mau untuk di kalkulasi: ";
    cin >> inputPertama;

    cout << "masukkan angka satunya lagi: ";
    cin >> inputKedua;

    hasil = inputPertama + inputKedua;
    cout << "hasil pertambahan dari " << inputPertama << " + " << inputKedua << " adalah " << hasil << endl;

    cout << "done bro, ";
    system("pause");
}