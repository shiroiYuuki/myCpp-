#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;



int main(){
    Player player1 = Player("Naruko");
    player1.display();

    // implementasi dari getter
    cout << player1.getName() << endl; // read only
    // player1.name = "Luna"; // tidak bisa di write

    // kegiatan bertarung
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);

    // hasilnya 
    player1.display();
    return 0;
}