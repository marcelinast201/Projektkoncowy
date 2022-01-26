//
// Created by pc on 25.01.2022.
//

#ifndef PROJEKTKONCOWY_READDATA_H
#define PROJEKTKONCOWY_READDATA_H
#include "Villager.h"
#include "Monster.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class ReadData {

public:
    /**
     * Read data base of Villagers
     * @return vector
     */
    static vector<Villager> readVillagers();
   /**
    * Read data base of Monsters
    * @return vector
    */
    static vector<Monster> readMonsters();

};


#endif //PROJEKTKONCOWY_READDATA_H
