#include <iostream>
#include <string>
#include "Player.h"

// penjabaran method
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    std::cout << this->name << std::endl;
}

std::string Player::getName(){
    return this -> name;
}

void Player::setName(const char* setName){
    this->name = name;
}