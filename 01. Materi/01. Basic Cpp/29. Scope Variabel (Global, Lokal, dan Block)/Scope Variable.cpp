#include <iostream>
using namespace std;

int x = 10; // variable global

int ambilGlobal(){
    return x; // mengambil variable global
}

int xLocal(){
    int x = 5; // variable local scopenya xLocal()
    return x;
}

int main(){
    cout << "1. variable global: " << x << endl;
    int x = 8; // variable local untuk main
    cout << "2. variable local main: " << x << endl;
    cout << "3. variable ambilGlobal " << ambilGlobal() << endl;
    cout << "4. variable local main: " << x << endl;
    cout << "5. variable xLocal: " << xLocal() << endl;
    cout << "6. variable local main: " << x << endl;
    
    cout << "7. variable local main: " << x << endl;
    {
        cout << "8. variable local main: " << x << endl;
        // block scope
        int x = 1;
        cout << "9. variable local main: " << x << endl;
        cout << "10. variable ambilGlobal " << ::x << endl; // mengambil variable yang paling jauh yaitu 10
    }
    cout << "11. variable local main: " << x << endl;
    
    system("pause");
    return 0;
}













// scope ada 2 global dan local