#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream myFile;

    myFile.open("data1.text", ios::app); // app kepanjangan dari append
    myFile << "Hallo ini isi yang data1 yang kamu buka";
    myFile.close();
    
    int a = 1234;
    myFile.open("data2.text", ios::out);
    myFile << "\n Hallo ini isi yang data2 yang kamu buka";
    myFile << a;
    myFile.close();

    myFile.open("data3.text", ios::trunc); // timpa
    myFile << "Hallo ini isi yang data3 yang kamu buka";
    myFile.close();

    system("pause");
    return 0;
}

// ios::out = default, operasi output;
// ios::app = menuliskan/menambah pada akhir baris;
// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus(ditimpa);