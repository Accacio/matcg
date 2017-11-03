#ifndef PLAYER_H
#define PLAYER_H
#include<string>


class Player
{
    public:
        int life_;
        std::string name_;
        Player(std::string n);
        virtual ~Player();
        friend std::ostream& operator<< (std::ostream& stream, const Player& player)
    {
        stream << player.name_;
        return stream;
    }
    protected:
    private:
};

#endif // PLAYER_H
