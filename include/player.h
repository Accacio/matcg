#ifndef PLAYER_H
#define PLAYER_H
#include<string>
using namespace std;

class Player
{
    public:
        int life;
        string name;
        Player(string n);
        virtual ~Player();
        friend std::ostream& operator<< (std::ostream& stream, const Player& player)
    {
        stream << player.name;
        return stream;
    }
    protected:
    private:
};

#endif // PLAYER_H
