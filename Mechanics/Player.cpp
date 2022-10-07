#include "Headers/Player.h"

Player::Player(){
    player = new sf::CircleShape();
    player->setRadius(25);
    player->setPosition(475,950);
    player->setFillColor(sf::Color::Green);
    player->setOutlineColor(sf::Color::White);
    score = 0;
    alive = 1;
}

void Player::draw(sf::RenderWindow* win){
    win->draw(*player);
}

void Player::movement(){
    if (alive == 1)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            player->moveRight();
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            player->moveLeft();
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            player->moveUp();
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            player->moveDown();
        }
    }
    
    
}