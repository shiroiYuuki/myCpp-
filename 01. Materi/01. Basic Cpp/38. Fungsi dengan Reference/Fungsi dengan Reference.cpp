#include <iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){
    int r = 9;
    cout << "address dari nilai r adalah: " << &r << endl;
    cout << "nilai dari r adalah: " << r << endl << endl;

    fungsi(r); // tidak seperti pointer, disini tidak perlu '&' di awal variable
    kuadrat(r);

    cout << "nilai dari r adalah: " << r << endl;
    system("pause");
    return 0;
}

void fungsi(int &p){ // jika pointer pakai '*' maka reference '&' 
    p = 4;
    cout << "alamat dari si p adalah: " << &p << endl; 
    cout << "nilai dari si p adalah: " << p << endl << endl; 
}

void kuadrat(int &kuadratP){
    kuadratP = kuadratP * kuadratP; // di reference tidak pakai '*' tidak seperti pointer.
}