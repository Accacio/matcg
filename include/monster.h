#ifndef MONSTER_H
#define MONSTER_H
#include<card.h>


class Monster : public Card
{
public:
    int life_;
    int attack_;
    Monster(string n,int a, int l,bool al=1);
    virtual ~Monster();
    void print() const
    {
        cout <<name_<<endl<<attack_<<"/"<<life_<<endl;
    }

    //Attack Operator >> for card
    void operator>>(Monster& card)
    {
        card.life_-=attack_;
        if(card.life_<=0)
        {
            card.alive_=false;
            cout<<card<<" is dead";//TODO ENVIAR card pro cemitério
            return;
        }
        life_-=card.attack_;
        if(life_<=0)
        {
            alive_=false;
            cout<<name_<<" is dead";//TODO ENVIAR self pro cemitério
            return;
        }

        //if it is needed to restore initial value to non-defeated monster
        //restore_init_vals();
        //card.restore_init_vals();
        return;
    }
    //Attack Operator >> for player
    void operator>>(Player player)
    {
        player.life_=-attack_;
        if(player.life_<=0)
        {
            cout<<player<<" is defated";
        }
    }


    void restore_init_vals();

protected:
private:
};

#endif // MONSTER_H
