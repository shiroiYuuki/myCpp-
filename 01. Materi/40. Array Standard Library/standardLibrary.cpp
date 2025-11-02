#include <iostream>
#include <array>

int main(){
    // membuat array dengan menggunakan standart library
    // array <tipe daya, jumlah array> nama array;

    std::array <int, 5> nilai;

    for(int i = 0; i <= 4; i++){
        nilai[i] = i;
        std::cout << "nilai [" << i << "] = " << nilai[i] << std::endl;
        std::cout << "addressnya: " << &nilai[i] << std::endl;
    }

    std::cout << std::endl;

    std::cout << "ukuran arraynya adalah: " << nilai.size() << std::endl; // mengetahui jumlah array di dalamnya
    std::cout << "Address awalnya adalah:  " << nilai.begin() << std::endl; // mengetahui address array yang pertama 
    std::cout << "Address akhirnya adalah:  " << nilai.end() << std::endl; // mengetahui address array yang terakhir (sesudah terakhir)
    std::cout << "Nilai ke 2 adalah  " << nilai.at(2) << std::endl; // mencari tau nilai yang "ke" lebih spesifik 

}