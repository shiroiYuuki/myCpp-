#include <iostream>
using namespace std;

int main(){
    int input;
    cout << "masukkan input: ";
    cin >> input;

    for(int baris = 1; baris <= input; baris++){ // loop ke bawah jumlah ke bawah mengikut input si user
        for(int turunan = 1; turunan <= baris; turunan++){ // loop ke samping jumlah ke samping mengikuti jumlah baris
            cout << "*";
        } 
        cout << endl;
    }

    cout << endl;

    for(int baris1 = 1; baris1 <= input; baris1++){  // loop ke bawah jumlah ke bawah mengikut input si user
        for(int turunan = input; turunan >= baris1; turunan--){ // jumlah awal mengikuti input user, jika bintang lebih banyak daripada baris maka kurangi bintang
            cout << "*";
        } 
        cout << endl;
    }

    system("pause");
    return 0;
}