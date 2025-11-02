#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 3;

    // meletakkan alamat dari si A, menggunakan pointer, pointer akan selalu bertipe data integer besaran nya 4 byte
    int *aPtr = &a; // * bertujuan memberi tau bahwa ini adalah pointer dan namanya gk boleh sama antara Pointer dan Int
    
    // Null pointer
    int *bPtr = nullptr; // mendeklarasikan pointer kosong untuk di isi nanti
    bPtr = &b;
    

    // int a mempunyai nilai dan address
    cout << "Nilai dari a adalah: " << a << endl;
    cout << "alamat dari si a: " << aPtr << endl; // &a berfungsi untuk mengambil address Nilai dari A
    cout << "Size dari Integer adalah: " << sizeof(int) << endl; // &a berfungsi untuk mengambil address Nilai dari A
    
    cout << "Nilai dari b adalah: " << b << endl;
    cout << "alamat dari b adalah: " << bPtr << endl;
    cout << "alamat dari si b: " << &b << endl; // &a berfungsi untuk mengambil address Nilai dari B

    // deferencing adalah mengambil data dari pointer
    cout << "Mengambil nilai dari pointer aPtr: " << *aPtr << endl;
    
    a = 10; // mengganti nilai dari a
    cout << "Mengambil nilai dari pointer aPtr: " << *aPtr << endl;
    system("pause");
    return 0;
}


/*
tanda jika itu adalah pointer biasanya di awal ada '*' contohnya ada di baris 9 dan 12;
==================================
Pointer adalah untuk manage memori 
==================================
berdasarkan code di atas jika ingin mengambil alamat dari pointer cukup gunakan aPtr tapi
jika ingin mengambil nilai dari sebuah pointer tersebut gunakan *aPtr
==================================

*/