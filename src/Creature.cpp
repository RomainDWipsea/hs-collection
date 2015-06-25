// Copyright 2015 <Romain Dambreville>
#include "Creature.h"
#include <iostream>
#include <string>

Creature::Creature() {
  std::cout << "Life : " << std::endl;
  std::cin >> m_life;
  std::cout << "Damage : " << std::endl;
  std::cin >> m_dmg;
  std::cout << "Please enter the card description" << std::endl;
  std::cin >> m_description;
}

Creature::Creature(std::string name, std::string set, std::string type,
                   std::string classe, std::string rarity, int manacost,
                   int life, int dmg) : Card(name, set, type,
                                             classe, rarity, manacost), m_life(life), m_dmg(dmg) {
  std::cout << "Please enter the card description" << std::endl;
  std::cin >> m_description;
}


Creature::~Creature() {
}
