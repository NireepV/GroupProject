#include <SFML/Graphics.hpp>
#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
    sf::Texture texture;
    sf::Sprite player;
    bool alive;
    int x;
    int y;
    int lives;
    int maxLives;
    bool control_keys[4];
public:
    Player(){
        x = 448;
        y = 896;
        texture.loadFromFile("/Users/user/Documents/VScode/ObjectOrientedProgramming/Group Project/GroupProject/Mechanics/Headers/Frog.png");
        player.setTexture(texture);
        player.setPosition(x,y);
        alive = true;
        maxLives = 3;
        lives = 10;
    }

    void draw(sf::RenderWindow* win){win->draw(player);}

    void death(){
        alive = false;
        if (lives > 1)
        {
            alive = true;
            x = 448;
            y = 896;
            player.setPosition(x,y);
            lives--;
        }
    }

    void waterEdgeDetect(){
        if (((player.getPosition().x < 0)||(player.getPosition().x == 1024))&&((player.getPosition().y < 448)||(player.getPosition().y == 128)))
        {
            death();
        }
    }

    void movement(){
    if (alive == 1)
    {
        bool hasMoved = false;

        if ((control_keys[0] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::D) == true))
        {
            hasMoved = true;
            if (((player.getPosition().y < 448))&&(x < 1024))
            {
                x= x+64;
                player.setPosition(sf::Vector2f(x,y));
            }  else if (x < 960)
            {
                x= x+64;
                player.setPosition(sf::Vector2f(x,y));
            }
            
        }
        if ((control_keys[1] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::A) == true))
        {
            hasMoved = true;
            if (((player.getPosition().y < 448))&&(x >= 0))
            {
                x= x-64;
                player.setPosition(sf::Vector2f(x,y));
            }  else if (x > 0)
            {
                x= x-64;
                player.setPosition(sf::Vector2f(x,y));
            }             
        }
        if ((control_keys[2] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::W) == true))
        {
            hasMoved = true;
            if (y != 0)
            {
                y= y-64;
                player.setPosition(sf::Vector2f(x,y));
            }             
        }
        if ((control_keys[3] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::S) == true))
        {
            hasMoved = true;
            if (y < 1024-128)
            {
                y= y+64;
                player.setPosition(sf::Vector2f(x,y));
            }          
        }

        control_keys[0] = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
		control_keys[1] = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
		control_keys[2] = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
		control_keys[3] = sf::Keyboard::isKeyPressed(sf::Keyboard::S);        
    }
    }

    ~Player(){};
};

#endif
