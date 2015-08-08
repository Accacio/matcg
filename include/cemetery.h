#ifndef CEMETERY_H
#define CEMETERY_H
#include<vector>
#include<card.h>
using namespace std;

class Cemetery
{
public:
    Cemetery();
    virtual ~Cemetery();
    vector<Card> cardsincemetery;
    void showcemetery();
    void sendtocemetery(Card card);
protected:
private:

};

#endif // CEMETERY_H
