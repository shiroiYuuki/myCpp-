#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string namaDepan;
        string namaTengah;
        string namaBelakang;
    public:
        Player(){
            namaDepan = "depan"; // menggunakan teknik implicit
            this->namaTengah = "tengah"; // teknik explicit dengan menggunakan pointer this
            // Player::namaBelakang = "belakang"; // teknik explicit dengan menggunakan pointer this
            (*this).namaBelakang = "belakang"; //dereference this pointer dan dot pointer
        }

        // kita bisa melakukan cascade function calls dengan *this
        Player& setNamaDepan(const char* depan){
            this->namaDepan = depan;
            return *this;
        }
        Player& setNamaBelakang(const char* belakang){
            (*this).namaBelakang = belakang;
            return *this;
        }
        Player& setNamaTengah(const char* tengah){
            (*this).namaTengah = tengah;
            return *this;
        }

        void display(){
            cout << "Nama depan: ";
            cout << " " << namaDepan;
            cout << " " << this-> namaTengah;
            cout << " " << (*this).namaBelakang << endl;
        }
};

int main(int argc, char const *argv[])
{
    Player* player1 = new Player(); // pointer harus pakai arrow
    Player player2 = Player();

    player1->display();
    player2.display();
    
    player1->setNamaDepan("ucup");
    player1->setNamaBelakang("surucup");
    player1->setNamaTengah("Dangerous");
    player1->display();
    
    // cascade function calls
    // player1->setNamaDepan("Otong").setNamaTengah(" The Best ").setNamaBelakang("Surotong");
    player1->setNamaDepan("Otong").setNamaTengah(" The Best ").setNamaBelakang("Surotong");
    player1->display();

    player2.display();
    player2.setNamaDepan("Dangerous").setNamaBelakang("ucup").setNamaTengah("surucup");
    player2.display();
    
    return 0;
}