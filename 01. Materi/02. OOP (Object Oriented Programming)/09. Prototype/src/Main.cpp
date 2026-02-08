#include <iostream>
#include <string>

using namespace std;

// deklarasi class
class Player{
    public:
        string name;

        // prototype constructor
        Player(const char*);
        // prototype
        void display();
        string getName();
        void setName(const char*); // tidak wajib memberikan nama di prototype
};

int main() {
    Player* playerObject = new Player("Marni");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;
    
    cout << "rubah nama: " << endl;
    playerObject->setName("Isabella");
    playerObject->display();
    return 0;
}

Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    cout << this->name << endl;
}

string Player::getName(){
    return this -> name;
}

void Player::setName(const char* setName){
    this->name = name;
}