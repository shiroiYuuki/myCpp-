#include <iostream>
using namespace std;

int main() {
    int a; // mendeklarasikan sebuah variable (isinya kosong)
    a = 100; // var a di isi nilai 100
    cout << "nilai a adalah: " << a << endl;

    int b;
    cout << "masukan nilai yang anda mau: ";
    cin >> b;
    cout << "nilai yang elu masukin itu nilainya " << endl;
    cout << b << endl;

    cin.get();
    return 0;
}