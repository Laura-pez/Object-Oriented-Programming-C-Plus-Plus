#include <iostream>
#include "RPG.H"

using namespace std;

int main() {
    RPG npc;
    RPG player("Player 1", 100, 10, 10, "warrior");

    cout << "Player Name: " << player.getName() << endl;
    cout << "Player Health: " << player.getHealth() << endl;
    cout << "Player Strength: " << player.getStrength() << endl;
    cout << "Player Defense: " << player.getDefense() << endl;

    cout << "Is player alive? " << (player.isAlive() ? "Yes" : "No") << endl;

    player.updateHealth(50);
    cout << "Player's updated health: " << player.getHealth() << endl;

    return 0;
}
