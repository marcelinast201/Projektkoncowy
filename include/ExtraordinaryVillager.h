//
// Created by pc on 05.01.2022.
//

#ifndef PROJEKTKONCOWY_EXTRAORDINARYVILLAGER_H
#define PROJEKTKONCOWY_EXTRAORDINARYVILLAGER_H

#include <string>
#include <iostream>
#include "Villager.h"

using namespace std;

template<typename type1, typename type2, typename type3>
class ExtraordinaryVillager {
private:
    type1 variable1;
    type2 variable2;
    type3 variable3;
public:
/**
 * create extraOrdinaryVillager
 * @param variable1
 * @param variable2
 * @param variable3
 */

   ExtraordinaryVillager(type1 variable1, type2 variable2, type3 variable3):variable1(variable1),variable2(variable2),variable3(variable3) {};

    /**
 * return name
 * @return name
 */
    type1 getVariable1() {
        return variable1;
    };

    /**
     * return age
     * @return age
     */
    type2 getVariable2() {
        return variable2;
    };

/**
 * Get ExtraOrdinaryVillager's skill
 * @return skill
 */
    type3 getVariable3(){
        return variable3;
    };


};


#endif //PROJEKTKONCOWY_EXTRAORDINARYVILLAGER_H
