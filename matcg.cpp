#include<iostream>
#include<conio.h>

#include "game.h"
#include "cemetery.h"
#include "card.h"
#include "monster.h"
#include "magic.h"
#include "player.h"
#include "deck.h"



void myfunction()
{
    std::cout<<"fiz alguma coisa"<<std::endl;
}

void myotherfunction()
{
    std::cout<<"fiz outra coisa"<<std::endl;
}

void takemonstername(Monster *monster)
{
    std::cout<<"Taking Life of creature "<<*monster<<std::endl;
    monster->get_attacked(monster->get_life());
    std::cout<<*monster<<std::endl;
}

int main(int argv, char * argc [])
{

    Monster guerreiro2("guerreiro2",2,4);
    Monster goblin("goblin",3,1);
    Monster guerreiro3("guerreiro3",2,3);
    Magic cartinha("cartinha magica",&myfunction);
    Magic cartinha2("outra cartinha magica",&takemonstername);

    Deck j;

    std::cout<<"Attacking"<<std::endl;
    goblin>>guerreiro3;
    std::cout<<"End Attacking"<<std::endl;


    cartinha.do_spell();
    cartinha2.set_spell_monster_target(&guerreiro2);
    cartinha2.do_spell();
    j<=cartinha;
    j<=guerreiro3;
    j<=guerreiro3;
    j<=goblin;
    j.showdeck();
//     show vector
    std::cout<<"Before shuffling"<<std::endl;
    j.showdeck();
    std::cout<<"After shuffling"<<std::endl;
    j.shuffledeck();
    j.showdeck();

    /*
    cout <<guerreiro;
    cout <<guerreiro2;
    cout << "Guerreiro is alive?"<<guerreiro.alive_<<endl;
    cout << "Guerreiro 2 is alive?"<<guerreiro2.alive_<<endl;
    cout<<endl<<"guerreiro ataca guerreiro2"<<endl;
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



    std::cout <<std::endl<<std::endl<<std::endl<<"terminou de rodar"<<std::endl;
    return 0;
}
