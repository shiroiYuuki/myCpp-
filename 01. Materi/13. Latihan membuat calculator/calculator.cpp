#include <iostream>
using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Oh hallo, selamat datang di kalkulator sederhana \n";
    cout << "masukkan nilai pertama: ";
    cin >> a;
    cout << "pilih operator +,-,/,*: ";
    cin >> aritmatika;
    cout << "masukkan nilai yang kedua: ";
    cin >> b;

    cout << "hasil perthitungan adalah ";
    cout << a << aritmatika << b;

    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;
    default:
        cout << "Operator tidak di temukan";
    }

    cout << hasil << endl;

    system("pause");
    return 0;
}