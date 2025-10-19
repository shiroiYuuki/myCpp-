#include <iostream>
using namespace std;

int pangkatRekursif(int angka, int pangkat, int depth = 0) {
    // Buat indentasi biar kelihatan level rekursinya
    for(int i = 0; i < depth; i++) cout << "  ";

    cout << "Masuk ke pangkatRekursif(" << angka << ", " << pangkat << ")\n";

    // Base case
    if(pangkat <= 1){
        for(int i = 0; i < depth; i++) cout << "  ";
        cout << "Akhir dari rekursif, return " << angka << "\n";
        return angka;
    }

    // Recursive step
    int hasil = angka * pangkatRekursif(angka, pangkat - 1, depth + 1);

    // Saat balik dari rekursi
    for(int i = 0; i < depth; i++) cout << "  ";
    cout << "Kembali ke level " << depth << " dengan hasil = " << hasil << "\n";

    return hasil;
}

int main(){
    int hasil = pangkatRekursif(2, 4);
    cout << "\nHasil akhirnya: " << hasil << endl;
    return 0;
}
