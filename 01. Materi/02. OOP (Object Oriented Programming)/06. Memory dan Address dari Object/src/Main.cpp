#include <iostream>
#include <string>
#include <chrono>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class kosong{ // class kosong minimal isinya 1 byte
    public:

        int data(){
            return 1;
        }
};

class isi{
    public:
        int dataInt1; // 4 byte
        int dataInt2; // 4 byte
        double dataDouble; // 8 byte
        string dataString; // 24 byte
}; // total nya 40 byte

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(const char* nama){
            Mahasiswa::nama = nama;
        }
};


int main() {
    // Besaran memory untuk sebuah object kita akan menampilkan besar dari class kosong
    // kita akan menampilkan besar dari class kosong 
    cout << "Alokasi class Kosong adalah: " << sizeof(kosong) << " byte" << endl;
    cout << "Alokasi class isi adalah: " << sizeof(isi) << " byte" << endl;

    // address
    string a;
    string b;
    Mahasiswa object1 = Mahasiswa("ucup"); // di simpan di stack
    Mahasiswa* object2 = new Mahasiswa("otong"); // di simpan di heap, variable/pointernya nya ada di stack, tapi objectnya ada di heap
    string c;
    string d;

    cout << "\nAddress stack" <<endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl; // ini di simpan di stack
    cout << object2 << endl; // ini di simpan di heap
    cout << &c << endl;
    cout << &d << endl;

    // Seberapa cepat kita membuat object di masing-masing memory

    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    cin.get();
    *tStackStart = Clock::now();
    Mahasiswa object3 = Mahasiswa("ucup");
    *tStackEnd = Clock::now();
    
    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa* object4 = new Mahasiswa("otong");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di stack adalah : " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di heap adalah : " << durasi.count() << endl;
    return 0;
}

// penggunaan memori stack lebih cepat namun memorinya terbatas, kalo naroh object kebanyakan bisa stack overflow
// penggunaan memori heap lebih lambat