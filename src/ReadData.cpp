//
// Created by pc on 25.01.2022.
//

#include "ReadData.h"

vector <Villager> ReadData::readVillagers() {
    string line;
    string delimiter = " ";
    ifstream file_("Villagers.txt");
    vector <Villager> villagers;
    if (file_.is_open()) {

        while (getline(file_, line)) {

            string name = line.substr(0, line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());
            string age = line.substr(0, line.find(delimiter));
            int valueOfAge = atoi(age.c_str());
            villagers.emplace_back(name, valueOfAge);
        }

        file_.close();

    } else {
        cout << "Couldn't open file";
    }
    return villagers;

}

vector <Monster> ReadData::readMonsters() {
    string line;
    string delimiter = " ";
    ifstream file_("Monsters.txt");
    vector <Monster> monsters;
    if (file_.is_open()) {

        while (getline(file_, line)) {

            string name = line.substr(0, line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());
            string health = line.substr(0, line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());
            string damage = line.substr(0, line.find(delimiter));
            int valueOfHealth = atoi(health.c_str());
            int valueOfDamage = atoi(damage.c_str());
            monsters.emplace_back(valueOfHealth, valueOfDamage);
        }

        file_.close();

    } else {
        cout << "Couldn't open file";
    }
    return monsters;

}
