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
    for (vector<Card>::iterator i = cardsincemetery.end()-1;
            i >= cardsincemetery.begin();
            i--)
    {
        cout<<*i<<endl;
    }
}

void Cemetery::sendtocemetery(Card card)
{
    cardsincemetery.push_back(card);
}
