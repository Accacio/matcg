#ifndef CEMETERY_H
#define CEMETERY_H
#include<vector>
#include<card.h>


class Cemetery
{
public:
    Cemetery();
    virtual ~Cemetery();
    std::vector<Card> cardsincemetery;
    void showcemetery();
    void sendtocemetery(Card card);
    void operator<=(const Card & card)
    {
        sendtocemetery(card);
        return;
    }
protected:
private:

};

#endif // CEMETERY_H
