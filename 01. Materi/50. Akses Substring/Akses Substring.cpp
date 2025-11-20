#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat1("Setiap livestream Fubuki selalu terasa hangat, seolah dia menyebarkan semangat positif tanpa henti.");
    string kalimat2("Fubuki menghadirkan energi cerah yang membuat para penonton betah berlama - lama.");

    cout << "1. " << kalimat1  << endl;
    cout << "2. " << kalimat2  << endl;

    // substring adalah mengambil string di tengah tengah
    // substr(index,panjang)
    cout << "Posisi kalimat ke-18 dengan panjang 7 huruf adalah: "; 
    cout << kalimat1.substr(18, 7) << endl; // outputnya akan menjadi tulisan
    cout << "Posisi kalimat ke-27 dengan panjang 8 huruf adalah: ";
    cout << kalimat2.substr(27, 5) << endl;
    
    // mencari posisi kalimat di substring
    cout << "Posisi kalimat positif adalah: ";
    cout << kalimat1.find("positif") << endl; // outputnya akan menjadi nomor/integer
    cout << "Posisi kalimat penonton adalah: ";
    cout << kalimat2.find("penonton") << endl;
    
    int menyimpanKalimat = kalimat1.find("ti");
    cout << "Posisi kata 'ti' adalah: ";
    cout << menyimpanKalimat << endl;
    cout << "Posisi kata 'ti' yang kedua adalah: ";
    cout << kalimat1.find("ti", menyimpanKalimat + 1) << endl;
    
    // mencari posisi dari belakang
    cout << "Posisi kata 'berlama' dari belakang adalah: ";
    cout << kalimat2.rfind("berlama") << endl; // penjelasan dibawah
    system("pause");
    return 0;
}

// rfind = cari dari belakang, laporkan posisi dari depan.