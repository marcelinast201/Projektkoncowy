//
// Created by pc on 21.01.2022.
//

#include "Boss.h"
#include <stdexcept>

Boss::Boss(int health, int damage) : Monster(health, damage) {

}

Boss Boss::tryCreateBoss(int health, int damage) {
    if ((health <= 0) || (damage <= 0)) {
        throw invalid_argument("The value can't be negative");
    } else {
        return Boss(health, damage);
    }
}

void Boss:: attack(Fighter &victim,bool doubleDamage) {
    if (doubleDamage) {
        int fullDamage = 2 * damage;
        victim.takeHit(fullDamage);
    }
    else
        victim.takeHit(damage);
}
