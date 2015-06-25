// Copyright 2015 <Romain Dambreville>

#ifndef _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_CARD_H_
#define _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_CARD_H_

#include <string>

class Card {
  friend class Collection;
 public:
  Card();
  Card(std::string name, std::string set, std::string type,
       std::string classe, std::string rarity, int manacost);
  ~Card();
  void write(std::string fileName);

 protected:
  std::string m_name;
  std::string m_set;
  std::string m_type;
  std::string m_classe;
  std::string m_rarity;
  int m_manaCost;
};
#endif  // _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_CARD_H_
