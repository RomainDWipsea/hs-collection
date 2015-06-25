// Copyright 2015 <Romain Dambreville>

#include "Spell.h"
#include <iostream>
#include <string>

Spell::Spell() : Card() {
  std::cout << "Please enter the card description" << std::endl;
  std::cin >> m_description;
}

Spell::Spell(std::string name, std::string set, std::string type,
             std::string classe, std::string rarity, int manacost) :
    Card(name, set, type, classe, rarity, manacost) {
  std::cout << "Please enter the card description" << std::endl;
  std::cin >> m_description;
}

Spell::~Spell() {
}
