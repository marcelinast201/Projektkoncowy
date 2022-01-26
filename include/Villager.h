//
// Created by pc on 17.12.2021.
//

#ifndef PROJEKTKONCOWY_VILLAGER_H
#define PROJEKTKONCOWY_VILLAGER_H

#include <iostream>
#include "Fighter.h"

using namespace std;

class Villager : public Fighter {
protected:
    string name;
    int age;
    int health;
public:
    /**
     * create villager
     * @param name
     * @param age
     */
    Villager(string name, int age);
/**
 * print data about villager
 * @param os
 * @param villager
 * @return information about villager
 */
    friend ostream &operator<<(ostream &os, const Villager &villager);
/**
 * attack a monster
 * @param victim
 */
    void attack(Fighter &victim) override;
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
/**
 * return health
 * @return health
 */
    int getHealth();
/**
 * return name og villager
 * @return name
 */
    string getName();


};


#endif //PROJEKTKONCOWY_VILLAGER_H
