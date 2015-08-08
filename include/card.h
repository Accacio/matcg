#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
#include<player.h>

using namespace std;

class Card
{
public:
    bool alive_;
    int life_;
    int attack_;
    string name_;
    Card(string n,int a=1, int l=1,bool al=1);
    virtual ~Card();
    friend std::ostream& operator<< (std::ostream& stream, const Card& card)
    {
        stream << card.name_<<endl<<card.attack_<<"/"<<card.life_<<endl;
        return stream;
    }
    bool operator==(const Card & card)
    {
        bool s;
        s=(name_==card.name_)&&
        (attack_==card.attack_)&&
        (life_==card.life_);
        return s;
    }

    void restore_init_vals();

    //Attack Operator >> for card
    void operator>>(Card& card)
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

protected:
private:
    //create initial values, in case restoration is needed.
    bool alive_init_;
    int life_init_;
    int attack_init_;

};

#endif // CARD_H
