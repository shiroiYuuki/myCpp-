#include <iostream>
using namespace std;

int main() {

    cout << "awalan loop" << endl;
    for(int counter = 1; counter <= 10; counter++) {
        cout << counter << endl;

    }
    
    cout << "awalan loop ke 2" << endl;
    for(int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }
    
    cout << "awalan loop ke 3" << endl;
    for(int x = 1; x >= -10; x--) {
        cout << x << endl;
    }

    cout << "awalan loop ke 4" << endl;
    int total = 0;
    for(int p = 1; p <= 10; p++, total += p) {
        cout << p << " || " << total << endl;
    }
    cout << "program berakhir" << endl;
    cin.get();
    return 0;
}



/*

for(inisialisasi; loop kondisi; increment) {

}


total += p // variable total dan p di tambahkan
*/