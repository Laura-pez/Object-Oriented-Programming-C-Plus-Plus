#include <iostream>
#include "RPG.H"

using namespace std;


void displayStats(RPG *player1, RPG *player2);
void displayEnd(RPG *player1, RPG *player2);
void gameloop(RPG *player1, RPG *player2);

int main(){
  RPG p1 = RPG("wiz", 70, 45, 15, "mage");
  RPG p2 = RPG();

  gameloop(&p1, &p2);
  displayEnd(&p1, &p2);
  return 0;
}
/**
* @brief print both player's name and their health.
* example output for names wiz and npc
* wiz health: 75 NPC health: 100/n
*
* @param player 1'
* @param player 2
*/
void displayStats(RPG *player1, RPG *player2){
  cout << player1->getName() << " health: " << player1->getHealth() << " ";
  cout << player2->getName() << " health: " << player2->getHealth() << endl;
}
/**
* @brief display who wins on who is alive. Use an if statement to check weather
* player 1 is alive. If so, print that they won, or else player 2 won.
*
* example output' 
* wiz defeated NPC! Good job/n
*
*@param player 1
*@param player 2
*/
void displayEnd(RPG *player1, RPG *player2){
   if (player1->isAlive()) {
       cout << player1->getName() << " defeated " << player2->getName() << "! Good job!" << endl;
   } else {
       cout << player2->getName() << " defeated " << player1->getName() << "! Good job!" << endl;
   }
}
/**@brrief uses a while loop to check whether both players are alive
*if so, its called displaySats((*player1), (*player2))
*inside the while loop it:
* then call(*player)museSkill((*player2)
*then prints "---------------\n"
*
*repeat the prices from player 2 acting on player 1 inside the same while loop
*then print the name of player two to say that it is their turn
*then call(*player2).useSkill((*player1))  
*then prints "---------------\n"
*
refer to the playing game part two instructions from the example output 
*
*@param player 1
*@param player 2
*/
void gameloop(RPG *player1, RPG *player2) {
  while (player1->isAlive() && player2->isAlive()) {
    displayStats(player1, player2);

      // Player 1's turn
      // Call player1's useSkill function on player2
      player1->useSkill(player2);
      cout << "---------------" << endl;

      // Player 2's turn

      displayStats(player1, player2);

      // Call player2's useSkill function on player1
      player2->useSkill(player1);
      cout << "---------------" << endl;
  }
}
