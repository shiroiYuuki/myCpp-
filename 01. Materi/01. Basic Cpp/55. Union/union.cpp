#include <iostream>
using namespace std;

union contoh{
    int integer;
    char character[3];
};

int main() {
    contoh vtuber;

    vtuber.integer = 2018;

    cout << "data int value " << vtuber.integer << endl;
    cout << "data char value " << vtuber.character << endl << endl;
    
    vtuber.character[0] = 'F';
    vtuber.character[1] = 'B';
    vtuber.character[2] = 'K';

    cout << "data int value " << vtuber.integer << endl;
    cout << "data char value " << vtuber.character << endl;

    system("pause");
    return 0;
}


/*
union itu seperti kotak yang bisa di masukkin apa saja, tapi cuman bisa 1 barang untuk di masukkan
================
union seperti struct tapi dia 1 memori berbagi dengan tipe data yang lain, jika kamu ubah 1 tipe data, 
yang lain akan ikut terubah
*/