#include "monster.h"

Monster::Monster(string n, int a, int l, bool al) {
    name_ = n;
    alive_init_ = alive_ = al;
    attack_init_ = attack_ = a;
    life_init_ = life_ = l;
}

Monster::~Monster() {
    // dtor
}

void Monster::restore_init_vals() {
    alive_ = alive_init_;
    attack_ = attack_init_;
    life_ = life_init_;
}
