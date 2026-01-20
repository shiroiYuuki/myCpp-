#include <iostream>
using namespace std;

//Prototype
int faktorial(int fakto);

int main(){
    int angka, hasil;
    cout << "Masukkan angka yang ingin anda faktorisasi: ";
    cin >> angka;
    
    hasil = faktorial(angka);
    cout << "Nilai faktorialnya adalah: " << hasil << endl;


    system("pause");
    return 0;
}


int faktorial(int fakto){

    if(fakto <= 1){
        cout << fakto;
        return fakto;
    } else{
        cout << fakto << "*";
        return fakto * faktorial(fakto - 1);
    }
}