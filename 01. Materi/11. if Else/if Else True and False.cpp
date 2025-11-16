#include <iostream>
using namespace std;

int main(){
    int telur;
    cout << "apakah ada telur? jika ya maka tekan 1 jika tidak maka 0: ";
    cin >> telur;

    if(telur){
        cout << "ada telurnya bang\n";
    }else{
        cout << "telurnya kagak ada bang\n";
    }
    
    
    cout << "Done \n";
    system("pause");
    return 0;
}

/*
dari sini di pelajari 2 hal yaitu:

1. bisa menentukan true/false nya dari input user
2. if else conditionnya bisa cuman true and falses

*/