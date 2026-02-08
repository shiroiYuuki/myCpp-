#include <iostream>
#include <string>

// eksternal definition
#include "Player.h"

using namespace std;





int main() {
    Player* playerObject = new Player("Marni");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;
    
    cout << "rubah nama: " << endl;
    playerObject->setName("Isabella");
    playerObject->display();
    return 0;
}
