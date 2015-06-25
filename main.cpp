// Copyright 2015 <Romain Dambreville>

#include <iostream>
#include <vector>
#include <string>

#include "src/Card.h"
#include "src/Collection.h"
#include "src/Creature.h"
#include "src/Spell.h"
#include "src/fonctions.h"


int main(int, char**) {
std::cout << "Hi, let's test the basic functionalities :"
          << std::endl << "You can : " << std::endl;
std::cout << "1-Create a creature : crea" << std::endl;
std::cout << "2-Create a spell : spell" << std::endl;
std::cout << "3-Create a collection : collection" << std::endl;
std::cout << "4-add a card to your collection : add" << std::endl;
std::cout << "5-exit" << std::endl;

std::vector<std::string> commandList;
commandList.push_back("crea");
commandList.push_back("spell");
commandList.push_back("collection");
commandList.push_back("add");
commandList.push_back("save");
commandList.push_back("exit");

Collection master("pouet");
std::string command("");

std::string cardName;
std::string fileName;
std::cout << "Command : " << std::endl;
std::cin >> command;

  do {
  switch (getCommandNumber(command, commandList)) {
    case 0:
      master.createCard(Creature());
      break;

    case 1:
      master.createCard(Spell());
      break;

    case 3:
      std::cout << "Card name to add : " << std::endl;
      std::cin >> cardName;
      master.addCard(cardName);
      cardName.clear();
      break;

    case 4:
      std::cout << "Give a fileName to save your collection" << std::endl;
      std::cin >> fileName;
      master.save(fileName);
      break;

    case 1000:
      std::cout << "Please enter a valid command" << std::endl;
      break;

    default:
      std::cout << "What else do you want to do ?" << std::endl;
      std::cin >> command;
      break;
  }

std::cout << "Command : " << std::endl;
std::cin >> command;
}while (command != "exit");

return 0;
}

int getCommandNumber(std::string command,
                     std::vector<std::string> commandList) {
  int res(1000);
  for (int i = 0; i < static_cast<int>(commandList.size()); i++) {
    if (commandList[i] == command) {
      res = i;
      break;
    }
  }
  return res;
}
