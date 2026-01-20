#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 5;

    // postincrement
    cout << a << endl;
    cout << a-- << endl; // akan di hitung setelah di print
    cout << a << endl;
    
    // preincrement
    cout << a << endl;
    cout << ++b << endl; // akan di hitung sebelum di print
    cout << a << endl;

    cin.get();
    return 0;
}


/*

increment dan decrement berfungsi mengurangi atau menambah secara bertahap
di bagi 2 yaitu: preincrement dan postincrement
a++ singkatan dari a = a + 1; ini namanya postincrement karena ++ nya di belakang
-- ++ 

pijat plus plus dan plus plus pijat =￣ω￣=
*/