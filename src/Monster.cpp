//
// Created by pc on 06.01.2022.
//

#include "Monster.h"

Monster::Monster(int health, int damage) : health(health), damage(damage) {};

void Monster::attack(Fighter &victim) {
    victim.takeHit(damage);
}

int Monster::getHealth() {
    return health;
}

void Monster::takeHit(int damage) {
    this->health = this->health - damage;
}


void Monster::setHealth(int health) {
    this->health = health;
}



