#include "card.h"

Card::Card(string n,int a, int l)
{
    name=n;
    attack=a;
    life=l;
}

Card::~Card()
{
    //dtor
}
