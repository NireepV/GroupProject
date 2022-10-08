#include "Headers/Player.hpp"

Player::Player(){
    x =480;
    y =928;
    texture.loadFromFile("Headers/Frog.png");
    player.setTexture(texture);
    player.setPosition(x,y);
    alive = true;
}

void Player::draw(sf::RenderWindow* win){
    win->draw(player);
}

void Player::movement(){
    if (alive == 1)
    {
        bool hasMoved = false;

        if ((control_keys[0] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::D) == true))
        {
            hasMoved = true;
            x= x+64;
            player.setPosition(sf::Vector2f(x,y));
        }
        if ((control_keys[1] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::A) == true))
        {
            hasMoved = true;
            x= x-64;
            player.setPosition(sf::Vector2f(x,y));            
        }
        if ((control_keys[2] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::W) == true))
        {
            hasMoved = true;
            y = y-64;
            player.setPosition(sf::Vector2f(x,y));            
        }
        if ((control_keys[3] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::S) == true))
        {
            hasMoved = true;
            y = y+64;
            player.setPosition(sf::Vector2f(x,y));            
        }

        control_keys[0] = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
		control_keys[1] = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
		control_keys[2] = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
		control_keys[3] = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);

        if (hasMoved == true)
        {
            int timer = 0;
            for (int i = 0; i < 10; i++)
            {
                i++;
            }
            if (timer == 10)
            {
                timer = 0;
            }
            hasMoved = false;
        }
        
    }
    }

