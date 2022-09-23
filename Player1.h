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

    ~Player(){}
};
