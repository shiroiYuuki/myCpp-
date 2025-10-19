#include <iostream>
using namespace std;

int countDown(int mundur);

int main(){
    int hitungMundur;
    cout << "masukkan angka yang ingin anda hitung mundur: ";
    cin >> hitungMundur;

    // cout << countDown(hitungMundur); jangan gunakan yang ini kalo gk mau ada angka 0 di akhir
    countDown(hitungMundur);
    
    system("pause");
    return 0;
}

int countDown(int mundur){
    if(mundur == 0){
        cout << "Done bang \n";
        return 0;
    } else {
        cout << mundur << " ";
        return countDown(mundur - 1); // code setelah return tidak akan pernah di jalankan jadi baris di bawah ini tidak akan pernah jalan
        cout << mundur << " ";
    }
}   