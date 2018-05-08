#ifndef CEMETERY_H
#define CEMETERY_H

#include<card.hpp>
#include<vector>

class Cemetery {
 public:
    Cemetery();
    virtual ~Cemetery();
    std::vector<Card> cardsincemetery;
    void showcemetery();
    /** @brief Sends Card to Cemetery*/
    void sendtocemetery(Card card);
    void operator<=(const Card & card) {
        sendtocemetery(card);
        return;
    }

 protected:
 private:
};

#endif // CEMETERY_H
