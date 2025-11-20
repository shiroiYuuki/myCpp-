#include <iostream>
#include <string>

using namespace std;

int main(){
    string kalimat("Kon");

    // menampilkan data string
    cout << kalimat << endl;

    // mengambil data berdasarkan index
    cout << "index ke 0 adalah " << kalimat[0] << endl;
    cout << "index ke 1 adalah " << kalimat[1] << endl;
    cout << "index ke 2 adalah " << kalimat[2] << endl;

    // merubah char pada index
    kalimat[0] = 'k'; // mengubah dari 'K' -> 'k'
    cout << kalimat << endl;
    
    // menyambung atau concatenation
    string kalimat2(kalimat +"Kon");
    cout << kalimat2 << endl;
    
    string kalimat3("Kitsune");
    kalimat2.append(" " + kalimat3);
    cout << kalimat2 << endl;
    
    string kalimat4("Fubuki Dayo~");
    kalimat2 += " " + kalimat4;
    cout << kalimat2 << endl;

    system("pause");
    return 0;
}