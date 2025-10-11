#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    bool hasil1, hasil2;

    // komperasi, relation expression

    // sebanding ==
    a = 2;
    b = 2;
    hasil1 = (a == b);
    cout << "nilai " << a << " dan " << b << " itu " << (a == b) << endl; // apakah sebanding? ya.

    // tidak sebanding !=
    a = 2;
    b = 2;
    hasil2 = (a != b);
    cout << "nilai " << a << " dan " << b << " itu " << (a != b) << endl; // apakah tidak sebanding? tidak.
    
    // kurang dari <
    a = 5;
    b = 3;
    hasil2 = (a < b);
    cout << "nilai " << a << " dan " << b << " itu " << hasil2 << endl; // apakah 5 kurang dari 3? tidak.
    
    // lebih dari >
    a = 5;
    b = 3;
    hasil2 = (a > b);
    cout << "nilai " << a << " dan " << b << " itu " << hasil2 << endl; // apakah 5 lebih dari 3? ya.

    // lebih dari sama dengan >=
    a = 5;
    b = 3;
    hasil2 = (a >= b);
    cout << "nilai " << a << " dan " << b << " itu " << hasil2 << endl; // apakah 5 lebih dari 3? ya.

    // kurang dari sama dengan <=
    a = 5;
    b = 3;
    hasil2 = (a <= b);
    cout << "nilai " << a << " dan " << b << " itu " << hasil2 << endl; // apakah 5 lebih dari 3? ya.
    cin.get();
    return 0;
}

/*

0 = false
1 = true

*/