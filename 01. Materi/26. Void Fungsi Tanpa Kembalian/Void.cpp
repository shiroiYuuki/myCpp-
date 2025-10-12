#include <iostream>
using namespace std;

// reporter karena dia melaporkan kembali sebuah nilai
int kuadrat(int x){ // fungsi yang memiliki 1 input
    int y;
    y = x * x;
    return y; // y akan mengembalikan hasil ke fungsi
}

// worker dia tidak perlu mengembalikan sebuah nilai, cukup mengerjakan saja
void tampilkan(int input){
    cout << "menampilkan dengan void: \n" << endl;
    cout << input << endl;
}

int main(){
    int input, hasil,a ,b , hasil2; // tipe data "hasil" harus sama dengan fungsi kuadrat
    cout << "masukkan nilai kuadrat dari: ";
    cin >> input;
    
    hasil = kuadrat(input);
    tampilkan(hasil);

    system("pause");
    return 0;
}



/*

void gk bisa di kasih fungsi return,

void infoJalan() {
    cout << "Selamat datang di jalan Antasari!" << endl;
    return 10; 
    }
    
    
    ❌ ERROR: fungsi void tidak bisa mengembalikan nilai


void infoJalan() {
    cout << "Selamat datang di jalan Antasari!" << endl;
    return; // boleh, tapi cuma buat menghentikan fungsi
}   
    Ini benar karena return; cuma menghentikan fungsi,
    nggak ngirim data apa pun ke luar.
    
*/