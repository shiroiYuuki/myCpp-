#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 2;
    bool hasil;

    // not 
    hasil = !(a == 3);
    cout << hasil << endl;
    
    // and/&&, kedua nilai harus benar agar hasilnya true 
    cout << "Operator And: \n" << endl; 
    hasil = (a == 3) and (b == 2);
    cout << hasil << endl; // true and true
    hasil = (a == 8) and (b == 2);
    cout << hasil << endl; // false and true
    hasil = (a == 3) && (b == 10);
    cout << hasil << endl; // true and false
    hasil = (a == 19) && (b == 10);
    cout << hasil << endl; // false and false
    
    // not (and/&&), kedua nilai harus benar agar hasilnya true 
    cout << "Operator And: \n" << endl; 
    hasil = !((a == 3) and (b == 2));
    cout << hasil << endl; // true and true
    hasil = !((a == 8) and (b == 2));
    cout << hasil << endl; // false and true
    hasil = !((a == 3) && (b == 10));
    cout << hasil << endl; // true and false
    hasil = !((a == 19) && (b == 10));
    cout << hasil << endl; // false and false

    // or: jika salah satu benar maka hasil akan true
    cout << "Operator or: \n" << endl; 
    hasil = (a == 3) or (b == 2);
    cout << hasil << endl; // true and true
    hasil = (a == 8) or (b == 2);
    cout << hasil << endl; // false and true
    hasil = (a == 3) || (b == 10);
    cout << hasil << endl; // true and false
    hasil = (a == 19) && (b == 10);
    cout << hasil << endl; // false and false

    cin.get();
    return 0;
}