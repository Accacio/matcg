#ifndef DECK_H
#define DECK_H


#include<cstdlib>
#include<ctime>

#include<vector>
#include<card.hpp>

/** @brief Deck of Cards **/
class Deck {
    int kmaxcardsindeck = 3;
 public:
    Deck();
    virtual ~Deck();
    std::vector<Card*> cardsindeck;
    /**  @brief Adds card to deck @param Card *card
     *   Card mimimi
     *
     */
    void addtodeck(Card *card);
    /**  @brief Removes card from deck */
    void removefromdeck();
    /**  @brief Shuffles deck using random function seeded by time */
    void shuffledeck();
    /* operator to add card to deck */
    void operator << (Card& card) {
        addtodeck(&card);
        return;
    }

    void showdeck();
 protected:
 private:
};

#endif // DECK_H
