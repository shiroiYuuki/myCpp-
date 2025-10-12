#include <iostream>
#include <cstdlib> //mengandung fungsi random

using namespace std;

int main(){
    
    char lanjut;
    while(true){
        cout << "dadu gk nih? (y/n): ";
        cin >> lanjut;
        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl;
        } else if(lanjut == 'n') {
            break;
        }else {
            cout << "Waring: ketik y/n dong... masa yang lain...";
        }
    }
    system("pause");
    return 0;
}


// 1 + (rand() % 6)
// rand()       -> menghasilkan angka acak besar
// % 6          -> membatasi hasil jadi 0–5
// +1           -> geser rentang jadi 1–6 (seperti dadu)
// Tanda % adalah operator modulus artinya ambil sisa pembagian.