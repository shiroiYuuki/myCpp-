#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main(int argc, const char** argv) {
    Mahasiswa data1;
    data1.nama = "Budi";
    data1.NIM = "54754546";
    data1.jurusan = "Ilmu lingkungan";
    data1.IPK = 4.0;
    
    Mahasiswa data2;
    data2.nama = "Rizki";
    data2.NIM = "523423446";
    data2.jurusan = "Hubungan Internasional";
    data2.IPK = 9.0;

    cout << "nama dari data1: " << data1.nama << endl;
    cout << "NIM dari data1: " << data1.NIM << endl;
    cout << "jurusan dari data1: " << data1.jurusan << endl;
    cout << "IPK dari data1: " << data1.IPK << endl;

    cout << "\n" << endl;
    
    cout << "nama dari data2: " << data2.nama << endl;
    cout << "NIM dari data2: " << data2.NIM << endl;
    cout << "jurusan dari data2: " << data2.jurusan << endl;
    cout << "IPK dari data2: " << data2.IPK << endl;

    system("pause");
    return 0;
}

// Cocok untuk:
// ingin mengatur cara data diakses
// ingin keamanan & aturan