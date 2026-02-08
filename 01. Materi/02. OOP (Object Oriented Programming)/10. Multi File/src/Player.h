#ifndef __PLAYER
#define __PLAYER

#include <string>

// deklarasi class

class Player{
    public:
    std::string name;
    
    // prototype constructor
    Player(const char*);
    // prototype
    void display();
    std::string getName();
    void setName(const char*); // tidak wajib memberikan nama di prototype
};

#endif