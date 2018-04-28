#ifndef MONSTER_H
#define MONSTER_H

#include<card.h>
#include <string>

class Monster : public Card {
 public:
    int life_;
    int attack_;
    Monster(string n, int a, int l, bool al = 1);
    virtual ~Monster();
    void print() const {
      std::cout << name_ << std::endl << attack_ << "/"<< life_ << std::endl;
    }

    // Attack Operator >> for card
    void operator>>(Monster& card) {
        card.life_- = attack_;
        if (card.life_ <= 0) {
            card.alive_ = false;
            // TODO(accacio) ENVIAR card pro cemiterio
                  std::cout << card << " is dead";
            return;
        }
        life_ -= card.attack_;
        if (life_ <= 0) {
            alive_ = false;
            // TODO(accacio) ENVIAR self pro cemiterio
                  std::cout << name_ << " is dead";
            return;
        }

        // if it is needed to restore initial value to non-defeated monster
        // restore_init_vals();
        // card.restore_init_vals();
        return;
    }
    void restore_init_vals();
    // Attack Operator >> for player
    void operator>>(Player player) {
        player.life_ -= attack_;
        if (player.life_ <= 0) {
                  std::cout << player << " is defated";
        }
    }
 protected:
 private:
};

#endif // MONSTER_H
