#include <iostream>

using namespace std;

int main(){
    int a = 6; // data 1 
    int b = 4; // data 2 

    int hasil; // kalo mau bagian hasilnya adalah koma, salah satu datanya harus float dan "hasilnya" juga float

    // penjumlahan
    hasil = a + b;  
    cout << a << " + " << b << " = " << hasil << endl;
    
    // pengurangan
    hasil = a - b;  
    cout << a << " - " << b << " = " << hasil << endl;
    
    // perkalian
    hasil = a * b;  
    cout << a << " - " << b << " = " << hasil << endl;
    
    // pembagian
    hasil = a / b;  
    cout << a << " - " << b << " = " << hasil << endl;
    
    // modulus
    hasil = a % b;  
    cout << a << " % " << b << " = " << hasil << endl; // modulus tidak bisa salah satunya float.
    
    // urutan eksekusi:
    hasil = (a + b) * a;
    cout << hasil << endl;
    
    
    cin.get();
    return 0; 
}

// operator +, -, *, /, %