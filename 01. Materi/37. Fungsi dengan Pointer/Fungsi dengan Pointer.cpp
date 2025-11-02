#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main(){
    int c = 10;
    cout << "Alamat dari c adalah: " << &c << endl; // '&c' berfungsi mengambil nilai dari var 'c'
    cout << "Nilai dari c adalah: " << c << endl;

    fungsi(&c); // untuk menggunakan function yang ada pointernya kita harus memanggil address dari 'c'
    kuadrat(&c); // dengan menggunakan (&)

    cout << "nilai dari c adalah " << c << endl;
    system("pause");
    return 0;
}

void fungsi(int *aPtr){
    cout << "alamat dari aPtr adalah: " << aPtr << endl; // alamat memori dari aPtr.
    cout << "nilai dari aPtr adalah: " << *aPtr << endl; // Deference.
}

void kuadrat(int *kuadrataPtr){
    *kuadrataPtr = (*kuadrataPtr) * (*kuadrataPtr); // (nilai pointer) x (nilai pointer);
}// nilai dari *kuadrataPtr yang dalam kasus ini yaitu 10, akan di kali dengan sesamanya.
