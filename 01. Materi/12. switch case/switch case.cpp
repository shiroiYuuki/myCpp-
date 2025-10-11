#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "masukkan nilai nya bro: ";
    cin >> a;

    switch(a) {
        case 1:
            cout << "selamat anda benar itu adalah 1" << endl;
            break; // gunakan ini agar menghentikan eksekusi case yang lain
        case 2:
            cout << "selamat anda benar itu adalah 2" << endl; /*jika di antara 1 - 4 benar maka dia akan mengeksekusi di bawahnya*/
        case 3:
            cout << "selamat anda benar itu adalah 3" << endl;
        case 4:
            cout << "selamat anda benar itu adalah 4" << endl;
        case 5:
            cout << "selamat anda benar itu adalah 5" << endl;
        default: // jika input user tidak sesuai dengan nilai case maka ini yang muncul
        cout << "default";
    }
    cout << "ini akhir dari program \n";

    system("pause");
    return 0;
}