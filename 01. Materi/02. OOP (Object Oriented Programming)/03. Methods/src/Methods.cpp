#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    public:
        string nama; // dua ini adalah data
        double IPK;
        
        // di bawah ini adalah fungsi fungsinya.
        Mahasiswa(string nama, double IPK){
            Mahasiswa::nama = nama;
            Mahasiswa::IPK = IPK;
        }

        // method tanpa parameter dan tanpa return
        void tampilkanData(){ 
            cout << "Nama saya " << nama << ", IPK saya adalah ";
            cout << IPK << endl;
        } 

        // method dengan parameter tanpa return
        void ubahNama(const char* namaBaru){ // const di sini melindungi sumber data, bukan tujuan data.
            Mahasiswa::nama = namaBaru;
        }

        // method tanpa parameter dan dengan return
        string getNama(){
            return Mahasiswa::nama;
        }
        double getIPK(){
            return IPK;
        }

        // method dengan dengan parameter dan dengan return
        double katrolIPK(const double &tambahanNilai){ // harus ada const untuk memastikan nilai ini tidak berubah karena kita memindahkan alamatnya.
            return Mahasiswa::IPK + tambahanNilai;
        } 
};

int main() {
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", 2.5);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", 4.0);

    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();
    
    mahasiswa1.ubahNama("Mario");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout << "dataNama = " << dataNama << endl;
    cout << "dataIPK = " << mahasiswa1.getIPK() << endl;
    cout << "nilai katrol = " << mahasiswa2.katrolIPK(-2.23) << endl;

    system("pause");
    return 0;
}