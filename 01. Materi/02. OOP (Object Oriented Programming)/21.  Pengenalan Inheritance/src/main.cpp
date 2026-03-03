#include <iostream>
#include <string>

// Base class / abstract class
class Hero{
    public:
        std::string name;
        void sayName(){
            std::cout << "nama saya " << this->name << std::endl;
        }
};

// subclass
class HeroIntel : public Hero{


};

class HeroStrength : public Hero{


};

int main(int argc, char const *argv[])
{
    Hero Hero1 = Hero();

    Hero1.name = "otong";
    Hero1.sayName();
    
    HeroIntel Hero2 = HeroIntel();
    
    Hero2.name = "ucup";
    Hero2.sayName();

    HeroStrength Hero3 = HeroStrength();
    
    Hero3.name = "ujang";
    Hero3.sayName();
    return 0;
}
