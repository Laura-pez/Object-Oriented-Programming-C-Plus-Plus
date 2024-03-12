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
    setSkills();


}

void RPG::setSkills(){
    if(type =="mage"){
        skills[0] = "fire";
        skills[1] =  "thunder";
    }else if (type=="thief"){
        skills[0] = "pilfer";
        skills[1] =  "jab"; 
    } else if (type=="archer"){
        skills[0] = "parry";
        skills[1] =  "crossbow_attack"; 
    }else {
        skills[0] = "slash";
        skills[1] =  "parry"; 
    }

}
void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}
/**

* @brief updates health into new_health
*
* @param new_health
*/  
void RPG::updateHealth(int){
}
  
void RPG::attack(RPG *){
}

void RPG::useSkill(RPG *){
}
/**
* @brief returns whether health is greater than 0
*
* @return true
* @return false
*/
bool RPG::isAlive() const{
    return false;
}

string RPG::getName() const{
    return string();
}

int RPG::getHealth() const{
    return health > 0;
}

int RPG::getStrength() const{
    return strength;
}

int RPG::getDefense() const{
    return defense;
}
