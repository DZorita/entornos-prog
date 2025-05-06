#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

class FinalBoss : public Character
{
private:
    int specialAttackPower;

public:
    FinalBoss(string name, int HP_character, int AV_character_sword, int AV_character_hit, int specialAttackPower)
        : Character(name, HP_character, AV_character_sword, AV_character_hit), specialAttackPower(specialAttackPower) {}

    string getStatusFinalBoss() {
        return getName() + " (Final Boss) has " + to_string(getHP()) + " HP and a special attack power of " + to_string(specialAttackPower);
    }

    void attackHero(Character& hero) {
        int damage = specialAttackPower;
        hero.setHP(hero.getHP() - damage);
    }
};
