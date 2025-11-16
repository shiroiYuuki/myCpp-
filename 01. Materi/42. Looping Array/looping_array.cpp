#include <iostream>
using namespace std;

int main() {
    // looping array untuk c++11 ke atas
    /*
        for(declarasi variable : array){
            statment
        }
    */
   int nilaiArray[10] = {0,1,2,3,4,5,6,7,8,9};
   for(int nilai : nilaiArray) { // Untuk setiap elemen di nilaiArray, salin nilainya ke variabel baru bernama nilai.
    cout << "address " << &nilai << " nilainya adalah " << nilai << endl;
    nilai = 1; // tidak akan mengubah nilai dari arraynya
   }
   
   cout << endl;

   // memanipulasi array dengan referensi
   for(int &nilaiRef : nilaiArray) { // nilaiRef adalah referensi ke elemen asli array, setiap kali nilaiRef berubah, elemen aslinya di array juga berubah.
    nilaiRef *= 3;
   }

   cout << endl;

   for(int &nilaiRef : nilaiArray) {
    cout << "address " << &nilaiRef << " nilainya adalah " << nilaiRef << endl; //alamatnya berbeda-beda, karena tiap elemen array punya alamat berbeda di memori.
   }

   system("pause");
   return 0;
}

/*
jadi intinya: 

for(int &nilaiRef : nilaiArray)

ini menunjukkan loop dengan referensi,
bukan loop dengan salinan biasa.
konsep ini bisa disebut sebagai: Reference variable.

int nilai        → loop by value
int &nilai       → loop by reference
const int &nilai → loop by const reference (buat baca aja, nggak bisa ubah data)
*/