#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;
    public:
        Hero(const char* name){
            this->name = name;
        }

    // ini adalah setter
    void setName(const char* name){
        this->name = name;
    }
    
    // getter
    string getName()const {
        return this->name;
    }

    // Member function ini tidak akan bisa karena attributenya tidak akan bisa kita rubah
    // void setName(const char* name){
    //     this->name = name;
    // }


    void display() const { // void display ini tipe nya constan, agar constan bisa di tampilkan
        cout << "Name : " << this->name << endl;
    }
};

int main(int argc, const char** argv) {
    Hero hero1 = Hero("otong");
    const Hero hero2 = Hero("ucup"); // ini adalah object constan tidak bisa di rubah isinya
    hero1.display();
    hero1.name = "Mario"; // ini juga bisa
    hero1.display();
    hero1.setName("Saitama"); // ini bisa
    hero1.display();
    
    hero2.display();
    // hero2.name = "Mario"; // tidak bisa
    // hero2.setName = "Mario"; // ini tidak bisa karena class hero 2 itu constan 
    hero2.display();
    cout << hero2.getName() << endl; // karena member function const dan tidak merubah apapun

    // Kesimpulan
    // 1. Jika objectnya tidak const, maka seluruh membernya bisa dipanggil
    // 2. jika objectnya const, maka hanya member function/method yang const yang dapat di panggil

    return 0;
}


