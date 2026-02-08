#include <iostream>
#include <string>

using namespace std;

// data member
class ClassTypes{
    public:
        string dataStr;
        double dataDouble;
        double m_dataDouble;

        ClassTypes(const char* dataStr, double dataDouble){
            // dengan menggunakan namespace dari class
            ClassTypes::dataStr = dataStr;

            // dengan menggunakan "this", "this" adalah pointer yang mereturn address dari oject
            cout << this << endl;
            this->dataDouble = dataDouble; // arrow adalah pointer to data, kalo di dalam pakai ini

            // dengan menggunakan konvensi penamaan, sama seperti yang di atas tapi lebih singkat.
            m_dataDouble = dataDouble;
        }
};

// member function
namespace otong{
    class Player{
        public:
            string name;
            double power;
            int health;

            Player(const char* name, double power){
                Player::setName(name);
                this->setPower(power);
            }

            void setName(const char* name){
                this->name = name;
            }

            void setPower(double power){
                this->power = power;
            }

            void setHealth(int);

    };
}

void otong::Player::setHealth(int health){
    this->health = health;
}

int main(int argc, char const *argv[])
{
    ClassTypes* object1 = new ClassTypes("object 1",0.05);
    cout << object1->dataStr << endl;
    cout << object1->dataDouble << endl; // kalo di luar pakai ini
    cout << object1->m_dataDouble << endl;

    otong::Player* player1 = new otong::Player("ucup",100);
    cout << player1->name << endl;
    player1->setHealth(10);
    cout << player1->health << endl;
    return 0;
}

/*
Mahasiswa m1;
Mahasiswa* m2 = &m1;

m1.nama = "Ucup";     // object
m2->nama = "Otong";   // pointer

(*p).x 

versi panjang dari 

this->x

-> setara dengan (*pointer).member
*/