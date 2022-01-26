//
// Created by pc on 21.01.2022.
//

#ifndef PROJEKTKONCOWY_BOSS_H
#define PROJEKTKONCOWY_BOSS_H
#include "Monster.h"

class Boss:public Monster{
    Boss(int health,int damage);
public:
    /**
     *Create Boss
     * @param health
     * @param damage
     * @return Boss parameters
     */
  static Boss tryCreateBoss(int health, int damage);
  /**
   * attacking a villager
   * @param victim
   * @param doubleDamage
   */
  void attack (Fighter &victim,bool doubleDamage);

    };


#endif //PROJEKTKONCOWY_BOSS_H
