#include <iostream>
#include <string>
using namespace std;

struct vtuber
{
    string name;
    string agency;
    string language;
    string debutDate;
    int height;

};


int main(){
    char ulang;

    vtuber contoh;
    cout << "=== Ini Adalah Contoh ===" << endl;
    contoh.name = "Shirakami Fubuki";
    cout << "Nama Vtuber: " << contoh.name << endl;
    cout << "Agensi Vtuber: " << (contoh.agency = "Hololive") << endl;
    cout << "Bahasa Vtuber: " << (contoh.language = "Japanase") << endl;
    cout << "Tanggal Debut Vtuber: " << (contoh.debutDate = "2018/06/01") << endl;
    cout << "Tinggi Vtuber: " << (contoh.height = 155) << " cm" << endl << endl;

    do{
    cout << "=== Input Datamu ===" << endl; // data di atas akan di timpa dengan yang ini
    cout << "Nama Vtuber: ";
    getline(cin, contoh.name);
    cout << "Agensi Vtuber: ";
    getline(cin, contoh.agency);
    cout << "Bahasa Vtuber: ";
    getline(cin, contoh.language);
    cout << "Tanggal Debut Vtuber: ";
    getline(cin, contoh.debutDate);
    cout << "Tinggi Vtuber: ";
    cin >> contoh.height;
    
    cout << endl;
    
    cout << "=== Data Yang Kamu Input ===" << endl;
    cout << "Nama Vtuber: " << contoh.name << endl;
    cout << "Agensi Vtuber: " << contoh.agency << endl;
    cout << "Bahasa Vtuber: " << contoh.language<< endl;
    cout << "Tanggal Debut Vtuber: " << contoh.debutDate<< endl;
    cout << "Tinggi Vtuber: " << contoh.height << " Cm"<< endl << endl;

    cout << "Apakah anda ingin Mengulangnya?(y/n): ";
    cin >> ulang;
    if(ulang == 'n' || ulang == 'N'){
        return 0;
    }
    cout << endl;
    } while(ulang == 'y' || ulang == 'Y');

}