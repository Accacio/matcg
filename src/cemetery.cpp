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
        cout<<"cemetery is empty"<<endl;
        return;
    }
    cout <<"Cards in cemetery are:\n";
    for (vector<Card>::iterator i = cardsincemetery.end()-1;
            i >= cardsincemetery.begin();
            i--)
    {
        cout<<*i<<endl;
    }
    return;
}

void Cemetery::sendtocemetery(Card card)
{
    cardsincemetery.push_back(card);
}
