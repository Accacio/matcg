#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include<string>


class Player {
 public:
        int life_;
        std::string name_;
        explicit Player(std::string n);
        virtual ~Player();
        friend std::ostream& operator<<
            (std::ostream& stream, const Player& player) {
        stream << player.name_;
        return stream;
    }
 protected:
 private:
};

#endif // PLAYER_H
