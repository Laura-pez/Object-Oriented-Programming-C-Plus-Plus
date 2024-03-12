#include <iostream>
#include "RPG.h"

using namespace std;

int main() {
    RPG npc; 
    RPG player("Player", 100, 10, 10, "warrior");
    cout << "Player name: " << player.getName() << endl;
    cout << "Player health: " << player.getHealth() << endl;

    cout << "NPC name: " << npc.getName() << endl;
    cout << "NPC health: " << npc.getHealth() << endl;
    

    npc.updateHealth(80);
    player.updateHealth(100);

    cout << "Updated NPC health: " << npc.getHealth() << endl;
    cout << "Updated player health: " << player.getHealth() << endl;

    return 0;
}
