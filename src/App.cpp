#include <iostream>

#include"Player.h"

int main(int argc, char *argv[]){
   Player matt("Joe", 10, 2);
   Player goblin("Goblin 1", 5, 1);

   std::cout << "Player has " << matt.getHealth() << " health" << std::endl;
   std::cout << "Goblin has " << goblin.getHealth() << " health" << std::endl;

   matt.attack(goblin);

   std::cout << "Player has " << matt.getHealth() << " health" << std::endl;
   std::cout << "Goblin has " << goblin.getHealth() << " health" << std::endl;

   return 0;
}
