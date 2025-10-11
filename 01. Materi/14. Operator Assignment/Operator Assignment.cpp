#include <iostream>
using namespace std;

int main(){
    // assigment
    int a = 10;
    cout << "nilai awal dari a adalah " << a << endl;
    // assigment operator
    a += 3;
    cout << "ditambah, nilai dari a saat ini adalah " << a << endl;
    
    a -= 3;
    cout << "dikurangi, nilai dari a saat ini adalah " << a << endl;
    
    a /= 3;
    cout << "dibagi, nilai dari a saat ini adalah " << a << endl;
    
    a *= 3;
    cout << "dikali, nilai dari a saat ini adalah " << a << endl;
    
    a %= 3;
    cout << "dimodulus, nilai dari a saat ini adalah " << a << endl;


    cin.get();
    return 0;
}


/*

Variable = Variable operator ekspresi
    A    =    A        +        3

Variable Operator= ekspresi
    A       +=        3

*/