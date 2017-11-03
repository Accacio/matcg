#include "cemetery.h"

Cemetery::Cemetery()
{
    //ctor
}

Cemetery::~Cemetery()
{
    //dtor
}

void Cemetery::showcemetery()
{
    if(cardsincemetery.empty())
    {
        std::cout<<"cemetery is empty"<<std::endl;
        return;
    }
    std::cout <<"Cards in cemetery are:\n";
    for ( auto i = cardsincemetery.end()-1;
            i>=cardsincemetery.begin();
            i--)
    {
        std::cout<<*i<<std::endl;
    }
    return;
}

void Cemetery::sendtocemetery(Card card)
{
    cardsincemetery.push_back(card);
}
