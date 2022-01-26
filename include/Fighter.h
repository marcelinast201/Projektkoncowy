//
// Created by pc on 03.01.2022.
//

#ifndef PROJEKTKONCOWY_FIGHTER_H
#define PROJEKTKONCOWY_FIGHTER_H

#include <iostream>
using namespace std;
class Fighter {
public:
    virtual void attack(Fighter &victim )=0;
     virtual void takeHit(int damage)=0;

};


#endif //PROJEKTKONCOWY_FIGHTER_H
