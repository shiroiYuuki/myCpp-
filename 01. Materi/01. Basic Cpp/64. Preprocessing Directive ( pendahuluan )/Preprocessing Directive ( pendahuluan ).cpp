#include <iostream>

// macro
#define PI 3.14159265359

using namespace std;

double pi = 3.14159265359;
int main(){
    cout << "nilai pi double = " << pi << endl;
    // cout << &PI << endl; tidak bisa seperti ini
    // cout << &3.14159265359 << endl; dan juga ini, karena akan mengakibatkan file error
    cout << "nilai pi double = " << PI << endl;

    cin.get();
    return 0;
}