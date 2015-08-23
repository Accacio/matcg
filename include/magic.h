#ifndef MAGIC_H
#define MAGIC_H
#include<card.h>




class Magic : public Card
{
public:
    Magic(string n);
    virtual ~Magic();
    void print() const
    {
        cout <<name_<<endl;
    }



protected:
private:
};








#endif // MAGIC_H
