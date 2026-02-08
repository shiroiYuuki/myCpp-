#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }

        string stringify(){ // untuk mengurutkan
            return "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class DBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName){
            DBase::fileName = fileName; // fungsi untuk menentukan nama file output
        }

        void save(Mahasiswa data){
            cout << data.nama << endl;
            cout << data.NIM << endl;
            cout << data.jurusan << endl;

            DBase::out.open(DBase::fileName,ios::app); // membuka file untuk meletakkan input
            DBase::out << data.stringify(); // memasukkan input yang sudah di ubah jadi string
            DBase::out.close(); // menutup filenya
        }

        void showAll(){
            DBase::in.open(DBase::fileName, ios::in);
            string nama, NIM, jurusan;
            int index = 1; // untuk memberikan nomor di awal data
            
            while(!DBase::in.eof()){
                DBase::in >> nama;
                DBase::in >> NIM;
                DBase::in >> jurusan;

                cout << index++ << "\t";
                cout << nama << "\t";
                cout << NIM << "\t";
                cout << jurusan << endl;
            }
            DBase::in.close();
        }
};

int main() {
    char condition;
    do{
        // Membuat object" yang di perlukan
        DBase database = DBase("data.text"); // mengatur nama dan extensi file untuk output
    
        // mengambil input dari user
        string nama, NIM, jurusan;
        cout << " MASUKKAN DATA MAHASISWA " << endl;
        cout << "nama: ";
        cin >> nama;
        cout << "NIM: ";
        cin >> NIM;
        cout << "jurusan: ";
        cin >> jurusan;
    
        Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);
    
        // save data ke database
        database.save(dataMahasiswa);
    
        // tampilan seluruh data di database
        database.showAll();


        cout << "mau isi data lagi?(y/n): ";
        cin >> condition;
        if(condition == 'n' || condition == 'N'){
            break;}

    } while (condition == 'Y' || condition == 'y');
    
    return 0;
}