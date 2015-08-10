#include<iostream>
#include<conio.h>
#include <game.h>
#include<cemetery.h>
#include<card.h>
#include<player.h>
#include<deck.h>
#include<vector>




using namespace std;

int main()
{
    Card guerreiro("guerreiro",3,3);
    Card guerreiro2("guerreiro2",2,4);
    Card goblin("goblin",1,1);
    Card guerreiro3("guerreiro3",2,3);
    Deck j;

    j<=guerreiro2;
    j<=guerreiro;
    j<=goblin;
    // show vector
    cout<<"Before shuffling ";
    j.showdeck();
    cout<<"After shuffling ";
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
