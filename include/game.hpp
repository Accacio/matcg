#ifndef GAME_H
#define GAME_H

#include<card.hpp>
#include<cemetery.hpp>

class Game {
 public:
    Game();
    virtual ~Game();
    Cemetery thecemetery;

 protected:
 private:
    int update();
    int init();
};

#endif // GAME_H
