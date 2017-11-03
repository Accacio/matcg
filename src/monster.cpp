#include "monster.h"

Monster::Monster(std::string n,int a, int l,bool al)
{
    name_=n;
    alive_init_=alive_=al;
    attack_init_=attack_=a;
    life_init_=life_=l;
}

Monster::~Monster()
{
    //dtor
}

void Monster::restore_init_vals()
{
    alive_=alive_init_;
    attack_=attack_init_;
    life_=life_init_;
}

int Monster::get_life()
{
    return life_;
}

int Monster::get_attack()
{
    return attack_;
}

bool Monster::get_attacked(int attack_value)
{
    life_-=attack_value;
    if(life_<=0)
        {
            alive_=false;
            std::cout<<*this<<" is dead"<<std::endl;

        }

    return alive_;
}
