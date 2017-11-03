#ifndef MAGIC_H
#define MAGIC_H
#include "monster.h"


class Magic : public Card
{
public:
    Magic(std::string n, void (* spell )());
    Magic(std::string n, void (* spell )(Monster *monster));
    virtual ~Magic();
    void print() const
    {
        std::cout <<name_<<" ";
    }

    void do_spell();

    void set_spell_monster_target(Monster * monster);

protected:
private:
    void (* void_spell) ()=nullptr;
    void (* monster_spell) (Monster *monster)=nullptr;

    Monster *spell_monster_target_=nullptr;
};








#endif // MAGIC_H
