#include <iostream>
#include "RPG.h"
#include <array>

using namespace std;

RPG::RPG(){
     string name = "NPC";
     health = 100;
     strengh = 10;
     defense = 10;
     string type = warrior;
    string skills[SKILL_SIZE];
}

RPG::RPG(string name, int health, int strength, int defense, string type){
    this->name = name;
    this->health = health;
    this->strength = Strength;
    this->defense = defense
    this->string = string
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
