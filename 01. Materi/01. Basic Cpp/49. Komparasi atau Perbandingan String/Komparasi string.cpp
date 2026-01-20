#include <iostream>
#include <string>
using namespace std;

int main(){
    // membandingkan 2 string
    string inputUser;
    string tebakPassword("hidupjokowi");

    while(true){
        cout << "tebak password yang ada di program ini" << endl << "masukkan: ";
        cin >> inputUser;
        if(inputUser == tebakPassword){
            cout << "Hore Tebakan anda benar, anda menebak " << inputUser << endl;
            break; 
        } 
        cout << "input anda salah anda memasukkan " << inputUser << " hiducoba lagi :)" << endl;
    }
    cout << "Program ini Selesai silahkan nyalakan program lagi jika ingin main lagi" << endl;
    system("pause");
    return 0;
}
