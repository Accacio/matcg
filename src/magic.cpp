#include "magic.h"

Magic::Magic(std::string n, void (* func )())
{
    name_=n;
    void_spell=func;
}

Magic::Magic(std::string n, void (* func )(Monster *monster))
{
    name_=n;
    monster_spell=func;
}



Magic::~Magic()
{
    //dtor
}

void Magic::do_spell()
{
    if(void_spell!=nullptr)
    {
        void_spell();
        return;
    }

    if(spell_monster_target_&&monster_spell!=nullptr)
    {
        monster_spell(spell_monster_target_);
        return;
    }

    std::cout<<"Nothing Done"<<std::endl;
}


void Magic::set_spell_monster_target(Monster *monster)
{
    spell_monster_target_=monster;
}
