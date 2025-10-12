#include <iostream> //perlu ini untuk menjalankan cout
// kosong tidak akan di eksekusi oleh cpp
int main() // int main fungsinya untuk memberi tau program cpp mulai dari mana. 
{ //dari awal sampai penutup kurawal itu namanya body
    std::cout << "Fox Wife" << std::endl;  // std = standart library, asalnya dari iostream, cout = console out akan mengeluarkan ke ,endl (end line) = memberi tau program bahwa programnya telah berakhir
    std::cin.get();
    return 0; // return ada hubungannya dengan int
}




// ini adalah file source code, perlu compiler agar bisa di jalankan



/*

cara compile menggunakan cmd:

1. pindah ke cd (folder), untuk lebih dari 1 kalimat pakai "", misalnya cd "01. Materi"
2. lalu ketik g++ main.cpp -o main.exe


*/