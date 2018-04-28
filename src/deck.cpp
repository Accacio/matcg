#include "deck.h"

Deck::Deck() {
    // ctor
}

Deck::~Deck() {
    // dtor
}

void Deck::addtodeck(Card *card) {
    if (!(kmaxcardsindeck == cardsindeck.size())) {
        cardsindeck.push_back(card);
        return;
    }
    cout << "Already have maximum number of cards" << endl;
    return;
}

void Deck::removefromdeck() {
    if (!cardsindeck.empty()) {
        cardsindeck.pop_back();
        return;
    }
    return;
}

void Deck::shuffledeck() {
    srand(time(0));
    for (auto i = (cardsindeck.end()-cardsindeck.begin())-1; i > 0; --i) {
        swap (cardsindeck.begin()[i],
              cardsindeck.begin()[rand()%cardsindeck.size()]);
    }
}

void Deck::showdeck() {
    if (cardsindeck.empty()) {
        cout << "Deck is empty" << endl;
        return;
    }
    cout << "Cards in Deck are:\n";
    for ( auto i = cardsindeck.end()-1;
            i >= cardsindeck.begin();
            i--) {
        cout << **i << endl;
    }
    return;
}
