#include "card.h"

Card::Card()
{
}

Card::~Card()
{
    //dtor
}

std::string Card::get_name()
{
    return name_;
}
