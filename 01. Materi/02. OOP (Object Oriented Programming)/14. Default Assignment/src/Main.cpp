#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;
        double power;

    public:
        // dengan default assigment
        Hero(const char* name = "Player", double health = 125.5, double power = 100){ // ini adalah contoh default
            this->name = name;
            this->health = health;
            this->power = power;
        }

        void display(){
            cout << "\nPlayer name = " << this->name << endl;
            cout << "Health = " << this->health << endl;
            cout << "Power = " << this->power << endl;
        }
};

int main(int argc, const char** argv) {
    Hero* hero1 = new Hero("ucup", 125); // ini ada di heap, ini akan mengambil 2 terdepan
    hero1->display();
    
    
    Hero hero2 = Hero(); // ini ada di stack, ini gk ada argumentnya maka dia akan menggunakan yang default yaitu "player" dan "125.5"
    hero2.display();
    
    Hero* hero3 = new Hero("otong"); // ini satu aja
    hero3->display();

    Hero* hero4 = new Hero("Maman", 100,150); // jika lengkap maka tidak di baca
    hero4->display();

    return 0;
}

