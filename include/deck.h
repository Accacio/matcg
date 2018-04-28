#ifndef DECK_H
#define DECK_H


#include<card.h>

#include<vector>
#include <cstdlib>
#include<ctime>

class Deck {
    int kmaxcardsindeck = 3;
 public:
    Deck();
    virtual ~Deck();
    vector<Card*> cardsindeck;
    void addtodeck(Card *card);
    void removefromdeck();
    void shuffledeck();
    void operator <= (const Card& card) {
        addtodeck(&card);
        return;
    }

    void showdeck();
 protected:
 private:
};

#endif // DECK_H
