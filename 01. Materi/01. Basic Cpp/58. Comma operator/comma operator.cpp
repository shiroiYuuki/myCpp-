#include <iostream>
#include <string>
using namespace std;

void menampilkan(int tampil){
    cout << tampil << endl;
}

int main(){
    int a;
    int b;
    int c;

    cout << "versi 1" << endl;
    a = (b = 3, cout << b << endl, c = 4, menampilkan(c), (b + c));
    
    cout << endl;
    
    cout << "versi 2" << endl;
    a = (b = 3, cout << b << endl, c = 4, menampilkan(c), (b + c));
    cout << a << endl;
    system("pause");
    return 0;
}