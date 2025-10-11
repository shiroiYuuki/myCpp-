#include <iostream>
using namespace std;

int main(){
    int p = 3;
    do {
        cout << "fox wife ";
        cout << p ;
        p++;
    } while(p < 5);

    cout << "done bang" << endl;
    cin.get();
    return 0;
}


/*

do {
    aksi
} while (syarat);

ini akan mengerjakan aksinya minimal 1x, kalo while loop tergantung syaratnya bisa tidak sama sekali
*/