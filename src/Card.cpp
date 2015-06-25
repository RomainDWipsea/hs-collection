// Copyright 2015 <Romain Dambreville>
#include "Card.h"
#include <iostream>
#include <fstream>
#include <string>

Card::Card() {
  std::cout << "Card name : " << std::endl;
  std::cin >> m_name;
  std::cout << "Card set : " << std::endl;
  std::cin >> m_set;
  std::cout << "Card type : " << std::endl;
  std::cin >> m_type;
  std::cout << "Card classe : " << std::endl;
  std::cin >> m_classe;
  std::cout << "Card rarity : " << std::endl;
  std::cin >> m_rarity;
  std::cout << "Card manacost : " << std::endl;
  std::cin >> m_manaCost;
}

Card::Card(std::string name, std::string set, std::string type,
           std::string classe, std::string rarity, int manacost) :
    m_name(name), m_set(set), m_type(type), m_classe(classe),
    m_rarity(rarity), m_manaCost(manacost) {
}



Card::~Card() {
}

void Card::write(std::string fileName) {
  std::ofstream out(fileName.c_str(), std::ios::app);
  if (out) {
      out<< "name : " << m_name << std::endl;
      out << "set : " << m_set << std::endl;
      out << "type : " << m_type << std::endl;
      out << "classe : " << m_classe << std::endl;
      out << "rarity : " << m_rarity << std::endl;
      out << "manacost : " << m_manaCost << std::endl;
      out.close();
    } else {
      std::cerr << "Cannot open file " << std::endl;
    }
}
