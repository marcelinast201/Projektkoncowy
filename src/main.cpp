//
// Created by pc on 17.12.2021.
//

#include "Villager.h"
#include "ExtraordinaryVillager.h"
#include "FightSimulator.h"
#include "ReadData.h"
#include "Camp.h"
#include <string>
#include <vector>
#include <Monster.h>
#include <Boss.h>
#include <fstream>



void createBoss(int &health, int &damage);

int main(int argc, char *argv[]) {
    // input arg = 0 fight with boss, other no boss
    int c = stoi(argv[1]);

    int health, damage;

    ExtraordinaryVillager<string, int, string> akara("Akara", 40, "I will identify items for you at no charge.");

    ExtraordinaryVillager<string, int, string> deckard("Deckard Cain", 85, "I can offer you poor shelter.");

    vector<Villager> villagers = ReadData::readVillagers();
    vector<Monster> monsters = ReadData::readMonsters();
    for (int i = 0; i < villagers.size(); ++i) {
        cout << villagers[i] << endl;
    }
    FightSimulator fightSimulator;
    bool isVillagerWinner = fightSimulator.simulateFight(villagers, monsters);
    if (isVillagerWinner && c == 0) {
        cout << "You will fight with Boss\n" << endl;
        createBoss(health, damage);
        try {
            Boss boss = Boss::tryCreateBoss(health, damage);
            fightSimulator.simulateFight(villagers, boss);
        }
        catch (const invalid_argument &e) {
            cout << "Invalid argument failed: " << e.what() << '\n';
            cout << "You will not fight with Boss\n";
        }
    } else {
        cout << "You will not fight with Boss\n";
    }
    cout << "Greetings traveler... I'm " << akara.getVariable1() << " and I'm " << akara.getVariable2()
         << " years old. " << akara.getVariable3() << endl;
    cout << "Greetings traveler... I'm " << deckard.getVariable1() << " and I'm " << deckard.getVariable2()
         << " years old. " << deckard.getVariable3() << endl;

}


void createBoss(int &health, int &damage) {
    cout << "Enter the Boss's health value:" << endl;
    cin >> health;
    cout << "\nEnter the Boss's damage value" << endl;
    cin >> damage;
}
