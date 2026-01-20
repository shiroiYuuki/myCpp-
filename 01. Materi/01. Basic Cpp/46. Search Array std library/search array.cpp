#include <iostream>
#include <algorithm>
#include <array>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main(){

	std::array <int, arraySize> angka = {9,4,2,5,8,0,1,7,6,3};
	printArray(angka);

	int angkaCari;
	bool ketemu;
	std::cout << "mencari angka dalam array diatas: ";
	std::cin >> angkaCari;
	std::sort(angka.begin(), angka.end());
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

	if (ketemu){
		std::cout << "ketemu" << std::endl;	
	} else {
		std::cout << "tidak ketemu" << std::endl;	
	}
	
	std::cin.get();
	return 0;
}



/*
========
ada 2 langkah untuk mencari data di dalam sebuah array:
	1. sort dulu
	2. search -> binary_search
========
ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

“Coba cari angka di variable "angkaCari" di dalam daftar angka yang sudah diurutkan.
Kalau ketemu, simpan hasilnya sebagai true.
Kalau tidak ketemu, simpan sebagai false.”
========
Logika di Belakang binary_search (Penjelasan Inti)

binary_search tidak mencari dari awal sampai akhir.
Dia memakai logika “membagi dua” seperti ini:
1. Lihat elemen tengah dari array.
2. Bandingkan dengan angkaCari.
3. Jika angkaCari lebih kecil → cari di bagian kiri.
4. Jika angkaCari lebih besar → cari di bagian kanan.
5. Ulangi sampai ditemukan atau habis.

Ini disebut binary search, jauh lebih cepat dari cari satu-satu.
========
Versi Bahasa Manusia + Logika (Gabungan)

“Mulailah dengan melihat angka di tengah daftar.
Jika yang dicari lebih kecil, fokus pada bagian kiri.
Jika lebih besar, fokus pada bagian kanan.
Ulangi membagi dua seperti itu sampai ditemukan.
Jika ketemu, nilai ketemu menjadi true, kalau tidak false.” - code
*/















