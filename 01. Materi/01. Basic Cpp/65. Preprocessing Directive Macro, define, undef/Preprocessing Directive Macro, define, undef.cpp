// preprocessing directive
#include <iostream>

// macro meraubah nilai dengan nama
#define PI 3.14159265359
#define bahasa "indonesia"

// macro untuk fungsi
#define kudrat(x) (x*x)
#define max(a,b) ((a > b) ? a:b)

// akhir dari preprocessing directive
using namespace std;

int main(){
    cout << "nilai PI " << PI << endl;
    cout << "bahasa " << bahasa << endl;
    cout << "kudrat " << kudrat(14) << endl;
    cout << "max " << max(4,9) << endl;

    #undef bahasa
    #define bahasa "inggris"
    cout << "bahasa " << bahasa << endl;

    return 0;
}