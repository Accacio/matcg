#ifndef MONSTER_H
#define MONSTER_H
#include "card.h"


class Monster : public Card
{
public:

    Monster(std::string n,int a, int l,bool al=1);
    virtual ~Monster();

    void print() const
    {
        std::cout <<name_<<"("<<attack_<<"/"<<life_<<") ";
    }

    //Attack Operator >> for card
    int operator>>(Monster& card)
    {

        if(!card.get_attacked(attack_))
        {
            //Other Died
            return 1;
        }

        if(!get_attacked(card.get_attack()))
        {
            //This Died
            return -1;
        }

        //if it is needed to restore initial value to non-defeated monster
        //restore_init_vals();
        //card.restore_init_vals();

        //No one died
        return 0;
    }
    //Attack Operator >> for player
    void operator>>(Player player)
    {
        player.life_=-attack_;
        if(player.life_<=0)
        {
            std::cout<<player<<" is defated";
        }
    }


    void restore_init_vals();

    int get_life();
    int get_attack();
    bool get_attacked(int attack_value);

protected:
private:
    int life_;
    int attack_;
};

#endif // MONSTER_H
