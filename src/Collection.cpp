// Copyright 2015 <Romain Dambreville>

#include "Collection.h"
#include <iostream>
#include <string>

Collection::Collection() {
}

Collection::Collection(std::string name):m_name(name) {
}

Collection::~Collection() {
}

void Collection::createCard(Card a) {
  this->m_cardList.push_back(a);
  this->m_cardNumber.push_back(0);
}

void eraseCard(std::string name);
void Collection::addCard(std::string name, int number) {
  for (int i = 0; i < static_cast<int>(m_cardList.size()); i++) {
    if (m_cardList[i].m_name == name) {
      m_cardNumber[i] += 1*number;
      std::cout << m_cardNumber[i] << m_cardList[i].m_name << std::endl;
    }
  }
}

void Collection::removeCard(std::string name, int number) {
  for (int i = 0; i < static_cast<int>(m_cardList.size()); i++) {
    if (m_cardList[i].m_name == name) {
      if (m_cardNumber[i] > 0) {
        m_cardNumber[i] -= 1*number;
        std::cout << m_cardNumber[i] << m_cardList[i].m_name;
      } else {
        std::cout << "You don't have any "
                  << name << " to remove." << std::endl;
      }
    }
  }
}

void Collection::save(std::string fileName, bool saveNumber) {
  for (int i = 0; i < static_cast<int>(m_cardList.size()); i++) {
      m_cardList[i].write(fileName);
    }
  if (!saveNumber) {
      std::cout << "Not saving card numbers" << std::endl;
    }
}

void Collection::load(std::string fileName, bool saveNumber) {
  for (int i = 0; i < static_cast<int>(m_cardList.size()); i++) {
      m_cardList[i].write(fileName);
    }
  if (!saveNumber) {
      std::cout << "Not loading card numbers" << std::endl;
    }
}
