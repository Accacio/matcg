#include<iostream>
#include<conio.h>
#include <game.h>
#include<cemetery.h>
#include<card.h>
#include<monster.h>
#include<magic.h>
#include<player.h>
#include<deck.h>
#include<vector>




using namespace std;

    void myfunction()
    {
        cout<<"fiz alguma coisa";
    }

int main()
{

    Monster guerreiro2("guerreiro2",2,4);
    Monster goblin("goblin",1,1);
    Monster guerreiro3("guerreiro3",2,3);
    Magic cartinha("cartinha magica");
    Deck j;
    goblin>>guerreiro3;
    j<=cartinha;
    j<=guerreiro3;
    j<=guerreiro3;
    j<=goblin;
    j.showdeck();
//     show vector
    cout<<"Before shuffling";
    j.showdeck();
    cout<<"After shuffling";
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



    cout <<endl<<endl<<endl<<"terminou de rodar"<<endl;
    _getch();
    return 0;
}
