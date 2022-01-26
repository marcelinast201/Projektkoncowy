//
// Created by pc on 06.01.2022.
//

#ifndef PROJEKTKONCOWY_MONSTER_H
#define PROJEKTKONCOWY_MONSTER_H


#include <iostream>
#include "Fighter.h"

using namespace std;

class Monster : public Fighter {
protected:

    int health;
    int damage;


public:
    /**
     * Create a monster
     * @param health
     * @param damage
     */
    Monster(int health, int damage);
/**
 * attack villager
 * @param victim
 */
    void attack(Fighter &victim) override;
/**
 * get value of health
 * @return health
 */
    int getHealth();
/**
 * lower value of health
 * @param damage
 */
    void takeHit(int damage) override;
/**
 * update value of health
 * @param health
 */
    void setHealth(int health);


};


#endif //PROJEKTKONCOWY_MONSTER_H
