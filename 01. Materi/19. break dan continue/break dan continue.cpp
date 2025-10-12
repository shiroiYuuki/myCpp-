#include <iostream>
using namespace std;

int main() {
    cout << "Break \n";
    for(int i = 0; i <= 10; i++){
        cout << i << endl;
        if(i == 5){
            break;
        }
        
    }
    
    cout << "Continue \n";
    int a = 0;
    while(a <= 10){
        if(a == 5){
            continue;
        } // akan terulang ulang di 5 karena bagian bawah di skip, jadi pindah incrementnya keatas untuk membuat code ini bekerja
        cout << a << endl;
        a++;
    }
    cin.get();
    return 0;
}


/*
https://youtu.be/we9-GLwXqzk?si=ZFlpAdiUb86pL2S2

continue = lompat ke awal loop berikutnya, lewatkan semua perintah di bawahnya

jadi kalo ada 

if (a == 5) { 
continue; 
} 

maka balik lagi ke 
 
while(a <= 10)

break: Hentikan loop sepenuhnya
continue: Lewatin sisa kode di loop tapi lanjut ke iterasi berikutnya
*/