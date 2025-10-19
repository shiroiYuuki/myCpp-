#include <iostream>
using namespace std;

int menghitungMundur(int mundur){
    if(mundur <= 0) {
        return mundur;
    } else {
        cout << mundur << " ";
        return menghitungMundur(mundur - 1); // bisa tanpa return tapi harus pakai void
    }

}

int main(){
    int hitungMundur, hasil;
    cout << "masukkan angka yang ingin anda hitung mundur: ";
    cin >> hitungMundur;

    menghitungMundur(hitungMundur);
    system("pause");
    return 0;
}