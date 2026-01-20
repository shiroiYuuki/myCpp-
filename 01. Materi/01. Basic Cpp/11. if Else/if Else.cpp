#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "masukkan angka: ";
    cin >> a;

    if(a == 3){
        cout << a << endl;
        cout << "nilai ini adalah 3 \n";
    } else if(a == 6){
        cout << "nilai ini adalah 6 \n";
    } else if(a == 90){
        cout << "nilai ini adalah 90 \n";
    } else{
        cout << "nilai ini bukan 3, 6, 90 \n";
    }
    
    
    cout << "Done \n";
    cin.get();
    return 0;
}
