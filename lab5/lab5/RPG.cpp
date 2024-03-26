#include <iostream>
#include "RPG.H"
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
    type = "warrior";
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
 printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}

/**
* @brief attack decreases the opponent's health by (strength - opponent's defense)
* For example, if the opponent's health is 100, the opponent' defense is 5, and the player's strength is 20, then after the attack, the opponent's health should be 
* 85 (i.e 100 - (20 - 5)).
* First calculate the opponent's health, then use (*opponent).Update(new_health).
* to update their health.
*)
* @param opponent
*/
void RPG::attack(RPG *opponent) {
    int new_health = (*opponent).getHealth() - (strength - (*opponent).getDefense());
    (*opponent).updateHealth(new_health);
  
}
/* @brief updates health into new_health
*
* @param new_health
*/
    void RPG::updateHealth(int new_health) {
        health = new_health;
    }

    void RPG::useSkill(RPG *opponent) {
//use a for loop to print all the player's skills
//the code within your loop should be:
//printf(skill %i %s/n', i, skil[i].c_str());
//where i is the index given your for loop
// Recall that SKILL_SIZE is set to 2 within RPG.h)
// The values of i should be 0 <= 1 <SILL_SIZE.
    for (int i = 0; i < SKILL_SIZE; ++i) {
      printf("Skill %i: %s\n", i, skills[i].c_str());

//Create an int called chose_skill_index
      int chosen_skill_index;
// use a print to output "choose a skill to use: Enter 0 or1/n on the terminal
      cout << "Choose a skill to use: Enter 0 or 1" << endl;

//get user input and assign it to chosen_skill_index
//(e.g. cin >> )
    cin >> chosen_skill_index;
//assigns the value of the skill at chosen_skill_index to a string called chosen_skill
      string chosen_skill = skills[chosen_skill_index];
//call the printAction function with the chosen_skill and opponent as arguments
//as parameter
//call attach opponent

    printAction(chosen_skill, *opponent);
    attack(opponent);
    }
}
    bool RPG::isAlive() const {
        return health > 0;
    }

    string RPG::getName() const {
        return name;
    }

    int RPG::getHealth() const {
        return health;
    }

    int RPG::getStrength() const {
        return strength;
    }

    int RPG::getDefense() const {
        return defense;
    }