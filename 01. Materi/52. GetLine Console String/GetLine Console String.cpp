#include <iostream>
#include <string>

int main(){
    std::string kalimatInput;

    // getline(asal, diletakkan di)
    std::cout << "=== Selamat datang di Program menghitung jumlah kalimat ===" << std::endl;
    std::cout << "masukkan kalimat yang anda mau: ";
    std::getline(std::cin,kalimatInput); // memasukkan input dari user ke dalam variable, kelebihannya bisa pakai spasi

    std::cout << "yang anda masukan adalah: " << kalimatInput <<std::endl;

    // jumlah kata dari input
    int posisi = 0;
    int jumlah = 0;

    while(true) {
        posisi = kalimatInput.find(" ", posisi + 1);
        jumlah++;
        if(posisi < 0){
            break;
        }
    }
    std::cout << "jumlah kata yang anda masukkan itu adalah: " << jumlah << std::endl;
    system("pause");
    return 0;
}