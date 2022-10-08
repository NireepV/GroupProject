#include <SFML/Graphics.hpp>
#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
    sf::CircleShape* player;
    bool alive;
    int x;
    int y;
public:
    Player(){
        x =480;
        y =928;
        player = new sf::CircleShape();
        player->setRadius(25);
        player->setOrigin(sf::Vector2f(25,25));
        player->setPosition(x,y);
        player->setFillColor(sf::Color::Green);
        player->setOutlineThickness(0.1);
        player->setOutlineColor(sf::Color::White);
        alive = true;
    }

    void draw(sf::RenderWindow* win){win->draw(*player);}

    void movement(){
    if (alive == 1)
    {
        bool hasMoved = false;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            hasMoved = true;
            x= x+64;
            player->setPosition(sf::Vector2f(x,y));
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            hasMoved = true;
            x= x-64;
            player->setPosition(sf::Vector2f(x,y));            
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            hasMoved = true;
            y = y-64;
            player->setPosition(sf::Vector2f(x,y));            
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            hasMoved = true;
            y = y+64;
            player->setPosition(sf::Vector2f(x,y));            
        }
    }
    }

    ~Player(){};
};

#endif
