#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <cmath>

class Player
{
private:
    sf::CircleShape* player;
    int score;
public:
    Player(){
        player = new sf::CircleShape();
        player->setRadius(50);
        player->setPosition(450,900);
        player->setFillColor(sf::Color::Blue);
        player->setOutlineColor(sf::Color::White);
    }
    void draw(sf::RenderWindow* win){
        win->draw(*player);
    }
    void jump(sf::RenderWindow* win){
        int maxJumpHeight = (win->getSize().y)/2;
        int increment = maxJumpHeight/60;
        int currentHeight = player->getPosition().y;
        for(;;){
            std::cout << currentHeight << std::endl;
            if ((currentHeight < maxJumpHeight)&&(currentHeight == 900))
            {
                player->move(sf::Vector2f(0,-increment));
            } 
            
        }
    };

    ~Player(){}
};
