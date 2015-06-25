// Copyright 2015 <Romain Dambreville>

#ifndef _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_COLLECTION_H_
#define _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_COLLECTION_H_

#include <vector>
#include "Card.h"
#include <string>

class Collection {
 public:
  Collection();
  explicit Collection(std::string name);  // single-parameter constructor
  void createCard(Card a);
  void eraseCard(std::string name);
  void addCard(std::string name, int number = 1);
  void removeCard(std::string name, int number = 1);
  void save(std::string fileName, bool saveNumber = false);
  void load(std::string fileName, bool loadNumber = false);
  ~Collection();

  std::string m_name;
  std::vector<Card> m_cardList;
  std::vector<int> m_cardNumber;
};
#endif  // _HOME_ROMAIN_CODE_COLLECTIONMANAGER_SRC_COLLECTION_H_
