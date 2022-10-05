#include <SFML/Graphics.hpp>
#include <string>

class Player
{
private:
    sf::CircleShape* player;
    int* score;
public:
    Player(){}

    void draw(sf::RenderWindow* win){}

    void movement(){}

    void moveRight(){
        player->move(sf::Vector2f(30,0));
    };
    void moveLeft(){
        player->move(sf::Vector2f(-30,0));
    };
    void moveUp(){
        player->move(sf::Vector2f(0,-30));
    };
    void moveDown(){
        player->move(sf::Vector2f(0,30));
    };
    int scoring(sf::RenderWindow* win){
        int psudoScore = 0;
        int middleLine = (win->getSize().y)/2;
        return *score;
    }

    ~Player(){}
};
