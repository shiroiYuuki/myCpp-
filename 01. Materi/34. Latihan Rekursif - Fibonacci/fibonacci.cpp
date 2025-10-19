#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int angka, hasil;
    cout << "menghitung fibonacci ke-N: ";
    cin >> angka;

    hasil = fibonacci(angka);

    cout << "nilai N-nya adalah: " << hasil << endl;
    system("pause");
    return 0;
}

int fibonacci(int n){
    if((n == 0) || (n == 1)) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}