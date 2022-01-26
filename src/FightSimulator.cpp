//
// Created by pc on 25.01.2022.
//

#include "FightSimulator.h"
#include "Camp.h"

bool FightSimulator::simulateFight(vector<Villager> villagers, vector<Monster> monsters) {

    bool isVillagerWin=true;

    int fightingVillager = 0;
    int fightingMonster = 0;

    while (fightingVillager < villagers.size() && fightingMonster < monsters.size()) {

        villagers[fightingVillager].attack(monsters[fightingMonster]);

        if (monsters[fightingMonster].getHealth() > 0) {
            monsters[fightingMonster].attack(villagers[fightingVillager]);
        }

        cout << "Fighting monster health left " << monsters[fightingMonster].getHealth() << endl;
        cout << "Fighting villager: " << villagers[fightingVillager].getName() << " health left "
             << villagers[fightingVillager].getHealth() << endl;

        if (villagers[fightingVillager].getHealth() <= 0) {
            villagers[fightingVillager].setHealth(0);
            fightingVillager++;
            isVillagerWin= false;
        }

        if (monsters[fightingMonster].getHealth() <= 0) {
            monsters[fightingMonster].setHealth(0);
            fightingMonster++;
            isVillagerWin= true;
        }

    }
    if (!isVillagerWin) {
        cout << "Monsters won you loose"<<endl;
        return false;
    }else {
        cout << "Villagers won"<<endl;
        return true;
    }

}

void FightSimulator::simulateFight(vector<Villager> villagers, Boss boss) {

    int fightingVillager = 0;
    bool isVillagerWin = true;
    for (int i = 0; i < villagers.size(); i++) {
        if (villagers[fightingVillager].getHealth() > 0) {
            fightingVillager = i;
        }
    }
    while (fightingVillager < villagers.size() && boss.getHealth() > 0) {

        villagers[fightingVillager].attack(boss);

        if (boss.getHealth() > 0) {
            boss.attack(villagers[fightingVillager], true);
        }

        cout << "Fighting boss health left " << boss.getHealth() << endl;
        cout << "Fighting villager: " << villagers[fightingVillager].getName() << " health left "
             << villagers[fightingVillager].getHealth() << endl;

        if (villagers[fightingVillager].getHealth() <= 0) {
            villagers[fightingVillager].setHealth(0);
            fightingVillager++;
            isVillagerWin = false;
        }

    }
    if (!isVillagerWin) {
        cout << "Monsters won you loose"<<endl;
        Camp*wsk=new Destroyed;
        delete wsk;
    } else {
        Camp *wsk =new Saved;
        delete wsk;
        cout << "Villagers won"<<endl;
    }
}

