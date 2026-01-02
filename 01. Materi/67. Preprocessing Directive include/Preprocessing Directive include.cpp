#include <iostream>
#include <string>
#include "library.h" // memanggil library external(namanya bebas asal extensinya ".h")

#define PI 3.14159265359

using namespace std;

int main(){
    cout << "berhasil" << endl;
    cout << "PI: " << PI << endl;
    cout << "kuadrat: " << kudrat(24) << endl;
    cout << "max: " << max(2, 4) << endl;
    cout << "string: " << dataString << endl;

    return 0;
}