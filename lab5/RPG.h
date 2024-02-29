#define RPG_H

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
     public:
        //constructors
        RPG();
        RPG(string name, int healht, int strenght, int defense, string type);
        // COMPLETE THE REST
        void setSkills();
        void printAction(string ,RPG)
        void updateHealth(int)
        void attack(RBG *)
        void updateHealth(int)
        void attack(RPG *)
        bool isAlive() const;
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;
    private:
        // COMPLETE THE REST
        string type: // warrior, mage, thief, archer
        string skill[SKILL_SIZE];
        string name;
        int health; 
        int strenght;
        int defense;
        string type;
        string skills[SKILL_SIZE];

};
#endif