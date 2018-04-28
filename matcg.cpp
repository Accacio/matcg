
#include <game.h>
#include<cemetery.h>
#include<card.h>
#include<monster.h>
#include<player.h>
#include<deck.h>

#include<conio.h>
#include<vector>
#include<iostream>

int main() {
    Monster guerreiro2("guerreiro2", 2, 4);
    Monster goblin("goblin", 1, 1);
    Monster guerreiro3("guerreiro3", 2, 3);
    Deck j;
    j <= guerreiro3;
    j <= goblin;
    j.showdeck();
// show vector
    std::cout << "Before shuffling ";
    j.showdeck();
    std::cout << "After shuffling ";
    j.shuffledeck();
    j.showdeck();

    /*
        std::cout <<guerreiro;
        std::cout <<guerreiro2;
        std::cout << "Guerreiro is alive?"<<guerreiro.alive_<<std::endl;
        std::cout << "Guerreiro 2 is alive?"<<guerreiro2.alive_<<std::endl;
        std::cout<<std::endl<<"guerreiro ataca guerreiro2"<<std::endl;
    guerreiro>>guerreiro2;
    Cemetery cemetery;
    if(!guerreiro2.alive_)
    {
        cemetery<=guerreiro2;
    }
    if(!guerreiro.alive_)
    {
        cemetery<=guerreiro;
    }
    cemetery.showcemetery();
    */



    std::cout << std::endl << std::endl;
    std::cout << std::endl << "terminou de rodar"<< std::endl;
    _getch();
    return 0;
}
