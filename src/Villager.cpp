//
// Created by pc on 17.12.2021.
//

#include "../include/Villager.h"
//Villager::Villager(){};
Villager::Villager(string name,int age) : name(name), age(age) {
    this->health=100;
}

ostream &operator<<(ostream &os, const Villager &villager) {
    return os << "Greetings traveler... I'm " << villager.name << " and I'm " << villager.age << " years old";
}

void Villager:: attack(Fighter &victim) {
    int damage = (100 - age*0.5)/10;
    victim.takeHit(damage);
}

 void  Villager::takeHit(int damage) {
    this->health = this->health - damage;
}

 int Villager:: getHealth() {
    return health;
}

string Villager::getName() {
    return name;
}

void Villager::setHealth(int health) {
this->health=health;
}
