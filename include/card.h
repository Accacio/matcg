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
    string name_;
    Card();
    virtual ~Card();
    virtual void print() const { std::cout << name_; }
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




protected:
    //create initial values, in case restoration is needed.
    bool alive_init_;
    int life_init_;
    int attack_init_;
private:


};





#endif // CARD_H
