#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

Player::Player(string name, Race race, int hitPoints, int magicPoints){
    this->name = name;
    this->race = race;
    this->magicPoints = magicPoints;
    this->hitPoints = hitPoints;
};

Player::~Player(){};

string Player::getName() const{
    return this->name;
};

Race Player::getRace() const{
    return this->race;
};

string Player::whatRace() const{
    if (this->race == HUMAN){
        return "Human";
    } else if (this->race == ELF)
    {
       return "Elf";
    } else if (this->race == DWARF){
        return "Dwarf";
    } else if (this->race == ORC){
        return "ORC";
    } else if (this->race == TROLL){
        return "Troll";
    } else {
        return "Undefined types that's not in the ENUM";
    }
    
};
int Player::getHitPoints() const{
    return this->hitPoints;
    
};

int Player::getMagicPoints() const{
    return this->magicPoints;
};

void Player::setName(string name){
    this->name = name;
};
void Player::setRace(Race race){
    this->race = race;
};

void Player::setHitPoints(int hitPoints){
    this->hitPoints = hitPoints;
};

void Player::setMagicPoints(int magicPoints){
    this->magicPoints = magicPoints;
};