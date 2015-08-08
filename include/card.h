#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
#include<player.h>

using namespace std;

class Card
{
public:

    int life;
    int attack;
    string name;
    Card(string n,int a=1, int l=1);
    virtual ~Card();
    friend std::ostream& operator<< (std::ostream& stream, const Card& card)
    {
        stream << card.name<<endl<<card.attack<<"/"<<card.life;
        return stream;
    }
    bool operator==(const Card & card) const
    {
        bool s;
        s=(name==card.name)&(attack==card.attack)&(life==card.life);
        return s;
    }

    //Attack Operator for card
    void operator>>(Card card)
    {
        card.life-=attack;
        if(card.life<=0)
        {
            cout<<"Deffending Card is dead";//TODO ENVIAR card pro cemitério
            return;
        }
        life-=card.attack;
        if(life<=0)
        {
            cout<<"Attacking Card is dead";//TODO ENVIAR self pro cemitério
        }
        return;
    }

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
int update();

};

#endif // CARD_H
