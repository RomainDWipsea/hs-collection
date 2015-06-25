// Copyright 2015 <Romain Dambreville>

#ifndef _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_CREATURE_H_
#define _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_CREATURE_H_

#include <string>
#include "Card.h"
class Creature : public Card {
 public:
  Creature();
  Creature(std::string name, std::string set, std::string type,
           std::string classe, std::string rarity,
           int manacost, int life, int dmg);

  ~Creature();

 protected:
  int m_life;
  int m_dmg;
  std::string m_description;
};

#endif  // _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_CREATURE_H_
