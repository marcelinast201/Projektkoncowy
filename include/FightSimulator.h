//
// Created by pc on 25.01.2022.
//

#ifndef PROJEKTKONCOWY_FIGHTSIMULATOR_H
#define PROJEKTKONCOWY_FIGHTSIMULATOR_H
#include "Villager.h"
#include "Monster.h"
#include <vector>
#include <fstream>
#include <string>
#include "Boss.h"
using namespace std;
class FightSimulator {
public:
    /**
     *Simulation of a fight with monsters
     * @param villagers
     * @param monsters
     * @return true if Villager won else false
     */
    bool simulateFight(vector<Villager> villagers, vector<Monster> monsters);
    /**
     * Simulation of a fight with boss
     * @param villagers
     * @param boss
     */
    void simulateFight(vector<Villager>villagers, Boss boss);

};


#endif //PROJEKTKONCOWY_FIGHTSIMULATOR_H
