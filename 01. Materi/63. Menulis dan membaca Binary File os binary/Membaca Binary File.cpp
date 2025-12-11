#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myFile("data.bin", ios::in | ios::binary);
    if (!myFile) {
        cerr << "Gagal membuka file untuk dibaca\n";
        return 1;
    }

    int hasil = 0;
    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    if (!myFile) {
        cerr << "Pembacaan gagal (mungkin file terlalu kecil)\n";
        return 1;
    }

    cout << "besar integer yang ada di file adalah: " << sizeof(hasil) << endl;
    cout << "nilai: " << hasil << endl;
    return 0;
}

// broken...