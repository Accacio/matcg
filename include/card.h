#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
#include<player.h>

using namespace std;

class Card
{
public:
    bool alive;
    int life;
    int attack;
    string name;
    Card(string n,int a=1, int l=1,bool al=1);
    virtual ~Card();
    friend std::ostream& operator<< (std::ostream& stream, const Card& card)
    {
        stream << card.name<<endl<<card.attack<<"/"<<card.life<<endl;
        return stream;
    }
    bool operator==(const Card & card)
    {
        bool s;
        s=(name==card.name)&(attack==card.attack)&(life==card.life);
        return s;
    }

    void restoreinitvals();

    //Attack Operator >> for card
    void operator>>(Card& card)
    {
        card.life-=attack;
        if(card.life<=0)
        {
            card.alive=false;
            cout<<card<<" is dead";//TODO ENVIAR card pro cemitério
            return;
        }
        life-=card.attack;
        if(life<=0)
        {
            alive=false;
            cout<<name<<" is dead";//TODO ENVIAR self pro cemitério
            return;
        }

        //if it is needed to restore initial value to non-defeated monster
        //restoreinitvals();
        //card.restoreinitvals();
        return;
    }
    //Attack Operator >> for player
    void operator>>(Player player)
    {
        player.life=-attack;
        if(player.life<=0)
        {
            cout<<player<<" is defated";
        }
    }

protected:
private:
    //create initial values, in case restoration is needed.
    bool alive_init;
    int life_init;
    int attack_init;

};

#endif // CARD_H
