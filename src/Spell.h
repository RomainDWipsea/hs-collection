// Copyright 2015 <Romain Dambreville>

#ifndef _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_SPELL_H_
#define _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_SPELL_H_

#include <string>
#include "Card.h"

class Spell : public Card {
 public:
  Spell();
  Spell(std::string name, std::string set, std::string type,
        std::string classe, std::string rarity, int manacost);
  ~Spell();

 private:
  std::string m_description;
};

#endif  // _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_SPELL_H_
