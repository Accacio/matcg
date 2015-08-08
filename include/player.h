#ifndef PLAYER_H
#define PLAYER_H
#include<string>
using namespace std;

class Player
{
    public:
        int life_;
        string name_;
        Player(string n);
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
