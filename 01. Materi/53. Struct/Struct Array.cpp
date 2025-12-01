#include <iostream>
#include <string>
#include <limits>
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

    vtuber input[3] {
    { "Shirakami Fubuki", "Hololive", "Japanese", "2018-06-01", 155},
    { "Hoshikawa Sarah", "Nijisanji", "Japanese", "2019-10-19", 158},
    { "Ironmouse", "VShojo", "English/Spanish", "2017-08-28", 147}
    };

    cout << "=== Ini Adalah Contoh ===" << endl;
    for(int i = 0; i < 3; i++){
        cout << "Nama Vtuber: " << input[i].name << endl;
        cout << "Agensi Vtuber: " << input[i].agency << endl;
        cout << "Bahasa Vtuber: " << input[i].language << endl;
        cout << "Tanggal Debut Vtuber: " << input[i].debutDate << endl;
        cout << "Tinggi Vtuber: " << input[i].height << " cm" << endl << endl;
    }
    
    
    do{        
        for(int i = 0; i < 3; i++){
            cout << "=== Input yang bisa anda masukkan ini yang ke-" << (i + 1) << " ===" << endl;
            cout << "Nama Vtuber: ";
            getline(cin, input[i].name);
            cout << "Agensi Vtuber: ";
            getline(cin, input[i].agency);
            cout << "Bahasa Vtuber: ";
            getline(cin, input[i].language);
            cout << "Tanggal Debut Vtuber: ";
            getline(cin, input[i].debutDate);
            cout << "Tinggi Vtuber: ";
            cin >> input[i].height;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }

        cout << "=== Ini Adalah Yang Anda Masukkan ===" << endl;
        for(int i = 0; i < 3; i++){
            cout << "Nama Vtuber: " << input[i].name << endl;
            cout << "Agensi Vtuber: " << input[i].agency << endl;
            cout << "Bahasa Vtuber: " << input[i].language << endl;
            cout << "Tanggal Debut Vtuber: " << input[i].debutDate << endl;
            cout << "Tinggi Vtuber: " << input[i].height << " cm" << endl << endl;
        }
        
        cout << "Apakah anda ingin Mengulangnya?(y/n): ";
        cin >> ulang;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if(ulang == 'n' || ulang == 'N'){
            return 0;
        }
    cout << endl;
    } while(ulang == 'y' || ulang == 'Y');

}