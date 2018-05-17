#include <game.hpp>
#include <cemetery.hpp>
#include <card.hpp>
#include <monster.hpp>
#include <player.hpp>
#include <deck.hpp>

#include <vector>
#include <iostream>

int main(int argc, char *argv[]) {
  Monster guerreiro2("guerreiro2", 2, 4, 0);
  Monster goblin("goblin", 1, 1);
  Monster guerreiro3("guerreiro3", 2, 3);
  Deck j;
  j.addtodeck(&guerreiro3);
  j.addtodeck(&goblin);
  j.showdeck();
  // show vector
  std::cout << "Before shuffling ";
  j.showdeck();
  std::cout << "After shuffling ";
  j.shuffledeck();

  // std::cout <<guerreiro;
  std::cout <<guerreiro2;
  // std::cout << "Guerreiro is alive?"<<guerreiro.alive_<<std::endl;
  // using namespace std;::cout
  // << "Guerreiro 2 is alive?"<<guerreiro2.alive_<<std::endl;
  // std::cout<<std::endl<<"guerreiro ataca guerreiro2"<<std::endl;
  // guerreiro>>guerreiro2;
  // Cemetery cemetery;
  // if(!guerreiro2.alive_)
  // {
  //   cemetery<=guerreiro2;
  // }
  // if(!guerreiro.alive_)
  // {
  //   cemetery<=guerreiro;
  // }
  // cemetery.showcemetery();
    






    return 0;
}
