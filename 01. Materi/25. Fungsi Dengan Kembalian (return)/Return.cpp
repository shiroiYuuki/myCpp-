#include <iostream>
using namespace std;


int kuadrat(int x){ // fungsi yang memiliki 1 input
    int y;
    y = x * x;
    return y; // y akan mengembalikan hasil ke fungsi
}

int tambah(int a,int b){ // fungsi yang memiliki 2 input
    int c;
    c = a + b;
    return c; 
}

int main(){
    int input, hasil,a ,b , hasil2; // tipe data "hasil" harus sama dengan fungsi kuadrat
    cout << "masukkan nilai kuadrat dari: ";
    cin >> input;
    
    hasil = kuadrat(input);
    
    cout << "hasilnya adalah: " << hasil << endl;
    
    cout << "masukkan nilai a: "; 
    cin >> a;
    cout << "masukkan nilai b: "; 
    cin >> b;
    
    hasil2 = tambah(a,b);
    cout << "hasilnya adalah: " << hasil2 << endl;
    
    system("pause");
    return 0;
}