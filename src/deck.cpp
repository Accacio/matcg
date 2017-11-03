#include "deck.h"

Deck::Deck()
{
    //ctor
}

Deck::~Deck()
{
    //dtor
}

void Deck::addtodeck(Card *card)
{
    if (!(kmaxcardsindeck==cardsindeck.size()))
    {
        cardsindeck.push_back(card);
        std::cout<< *card <<"added to deck"<<std::endl;
        return;
    }
    std::cout<<"Already have maximum number of cards"<<std::endl;
    return;
}

void Deck::removefromdeck()
{
    if (!cardsindeck.empty())
    {
        cardsindeck.pop_back();
        return;
    }
    return;
}

void Deck::shuffledeck()
{
    srand(time(0));
    for (auto i=(cardsindeck.end()-cardsindeck.begin())-1; i>0; --i)
    {
        std::swap (cardsindeck.begin()[i], cardsindeck.begin()[rand()%cardsindeck.size()]);
    }
}

void Deck::showdeck()
{
    if(cardsindeck.empty())
    {
        std::cout<<"Deck is empty"<<std::endl;
        return;
    }
    std::cout <<"Cards in Deck are:\n";
    for ( auto i = cardsindeck.end()-1;
            i>=cardsindeck.begin();
            i--)
    {
        std::cout<<**i<<std::endl;
    }
    return;
}
