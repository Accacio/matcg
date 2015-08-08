#include "card.h"

Card::Card(string n,int a, int l,bool al)
{
    name=n;
    alive_init=alive=al;
    attack_init=attack=a;
    life_init=life=l;
}

Card::~Card()
{
    //dtor
}
void Card::restoreinitvals()
{
    alive=alive_init;
    attack=attack_init;
    life=life_init;
}
