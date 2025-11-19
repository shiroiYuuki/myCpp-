#include <iostream>
#include <string>

using namespace std;

void menampilkanTeks(string teks){
    cout << "data yang anda masukan adalah: " << teks << endl;
}

int main(){
    // char kata[5] = {'F', 'U', 'B', 'U', 'K', 'I'}
    // array char tidak bisa kita tambah, fiks karena array.
    string vtuber("Fubuki");
    cout << "data saat ini adalah "<< vtuber << endl;

    string newData;
    cout << "Masukkan Sebuah data: ";
    cin >> newData;
    menampilkanTeks(newData);
    system("pause");
    return 0;
}   


// string hanya bisa memasukan kata, bukan kalimat.
// string adalah sebuah char array yang bisa kita ubah datanya melalui input.