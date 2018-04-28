#ifndef CEMETERY_H
#define CEMETERY_H

#include<card.h>
#include<vector>

class Cemetery {
 public:
    Cemetery();
    virtual ~Cemetery();
    vector<Card> cardsincemetery;
    void showcemetery();
    void sendtocemetery(Card card);
    void operator<=(const Card & card) {
        sendtocemetery(card);
        return;
    }

 protected:
 private:
};

#endif // CEMETERY_H
