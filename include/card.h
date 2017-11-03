#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
#include<player.h>


class Card
{
public:

    Card();
    virtual ~Card();
    virtual void print() const {}
    bool operator==(const Card & card)
    {
        bool s;
        s=(name_==card.name_);
        return s;
    }

    void restore_init_vals();
    friend std::ostream& operator<<(std::ostream& os, const Card& a )
{
     a.print();
     return os;
}

    std::string get_name();


protected:
    //create initial values, in case restoration is needed.
    bool alive_init_;/**< Initial Alive value, in case restoration is needed. */
    int life_init_;/**< Initial Life value, in case restoration is needed.*/
    int attack_init_;/**< Initial Attack value, in case restoration is needed. */
    std::string name_;
    bool alive_;
private:



};





#endif // CARD_H
