#include <iostream>
#include <array>
#include <algorithm> // lib untuk mengurutkan 


const size_t arraySize = 10; // paling bawah

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){ // &a adalah reference ke array asli jika a di ubah maka array asli juga berubah
		std::cout << a << " ";
	}
	std::cout << std::endl;
}
    // di atas dan bawah ini adalah fungsi overloading.
void printArray(std::array <char, arraySize> &angka){
	std::cout << "Array: ";
	for(char &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main(){
	std::array <int, arraySize> angka = {67,23,25,12,90,68,49,87,51,19}; // membuat array bertipe integer dengan besaran arraySize(10)
	std::array <char, arraySize> huruf = {'c','h','j','e','r','t','y','v','b','a'}; // membuat array bertipe char dengan besaran arraySize(10)

	printArray(angka);
	printArray(huruf);

	std::cout << std::endl;

	std::sort(angka.begin(), angka.end()); // berfungsi untuk mengurutkan array bernama "angka" dari kecil ke besar.
	printArray(angka);

	std::sort(huruf.begin(), huruf.end());
	printArray(huruf);


	std::cin.get();
	return 0;
}


/*
=============== size_t
size_t adalah tipe data khusus yang digunakan untuk menyimpan “ukuran”, misalnya panjang array, jumlah elemen, atau ukuran memori.

Sifatnya:
1. Selalu positif (tidak ada angka minus).
2. Ukuran bit-nya mengikuti sistem (32-bit atau 64-bit).
3. Paling aman untuk menghitung ukuran atau indeks array.

Bayangkan size_t kayak:
“Kotak angka yang dibuat khusus untuk menghitung berapa banyak sesuatu.”
Dia tidak bisa menyimpan angka minus, karena tidak ada “ukuran negatif”.

Contoh hal yang cocok disimpan pakai size_t:
# Jumlah elemen array
# Panjang string
# Banyak data yang dialokasikan
# Indeks array saat looping

Jika butuh nilai yang menggambarkan “berapa banyak” sesuatu → pakai size_t.

Bahasa gampangnya, size_t digunakan untuk mengubah tipe data menyesuaikan dengan data yang dimasukkan.
===============

*/