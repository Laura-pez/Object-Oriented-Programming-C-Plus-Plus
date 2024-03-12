#include <iostream>
#include "RPG.h"
#include <array>

using namespace std;
/**
 * @brief Construct a new RPG:: RPG object
 * 
 */

RPG::RPG(){
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = warrior;
    skills[0] = "slash";
    skills[1] = "parry";
}

/**
 * @brief Construct a new RPG:: RPG object
 * 
 * @param name 
 * @param health 
 * @param strength 
 * @param defense
 * @param type 
 */

RPG::RPG(string name, int health, int strength, int defense, string type){
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;


}

void RPG::setSkills(){
    
}
 
void RPG::printAction(string, RPG){
}

void RPG::updateHealth(int){
    
}
  
void RPG::attack(RPG *){
}

void RPG::useSkill(RPG *){
}

bool RPG::isAlive() const{
    return false;
}

string RPG::getName() const{
    return string();
}

int RPG::getHealth() const{
    return 0;
}

int RPG::getStrength() const{
    return 0;
}

int RPG::getDefense() const{
    return 0;
}
