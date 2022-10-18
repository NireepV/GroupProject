#include <SFML/Graphics.hpp>
#include <string>
#include "Mystery.hpp"

#ifndef PLAYER_H
#define PLAYER_H

class Player : public Mystery
{
private:
    sf::Texture texture;
    bool alive;
    int playerSpeed;
    int x;
    int y;
    int lives;
    bool control_keys[4];
public:
    sf::Sprite player;
    sf::FloatRect boundary;
    bool inverted;

    Player(){
        inverted = false;
        x = 448;
        y = 896;
        texture.loadFromFile("/Users/user/Documents/VScode/ObjectOrientedProgramming/Group Project/GroupProject/Mechanics/Headers/Frog.png");
        player.setTexture(texture);
        player.setPosition(x,y);
        alive = true;
        lives = 1;
        playerSpeed = 64;
    }

    void setLives(int x){
        lives = x;
    }

    int getLives(){return lives;}

    void setTexture(sf::Texture x){
        player.setTexture(x);
    }

    void draw(sf::RenderWindow* win){
        win->draw(player);
        std::cout << touched << "||||" << lives << std::endl;
        if (touched == false)
        {
            win->draw(box);
        } 
    }

    void effects(){
    if (touched == false)
    {
        if (typeBox == 1)
        {
            if (lives < 3)
            {
                lives = lives + 2;
            }

        } else if(typeBox == 0){
                texture.loadFromFile("/Users/user/Documents/VScode/ObjectOrientedProgramming/Group Project/GroupProject/Mechanics/Headers/BadFrog.png");
                player.setTexture(texture);
                x = 448;
                y = 896;
                player.setPosition(sf::Vector2f(x,y));
                inverted = true;
                box.setPosition(sf::Vector2f(1024,0));
        }
    }     
    }

    void death(){
        alive = false;
        if (lives > 1)
        {
            alive = true;
            x = 448;
            y = 896;
            player.setPosition(x,y);
            inverted = false;
            lives--;
            texture.loadFromFile("/Users/user/Documents/VScode/ObjectOrientedProgramming/Group Project/GroupProject/Mechanics/Headers/Frog.png");
            player.setTexture(texture);
        }
    }

    void waterEdgeDetect(){
        if (((player.getPosition().x < 0)||(player.getPosition().x == 1024))&&((player.getPosition().y < 448)||(player.getPosition().y == 128)))
        {
            death();
        }
    }

    void collision(){
        if (box.getGlobalBounds().intersects(player.getGlobalBounds()))
        {
            touched = true;
            effects();
        }
    }

    void movement(){
    if (alive == true)
    {
    if (inverted == false)
    {
        if ((control_keys[0] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::D) == true))
        {
            if (((player.getPosition().y < 448))&&(x < 1024))
            {
                x= x+playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }  else if (x < 960)
            {
                x= x+playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }
            
        }
        if ((control_keys[1] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::A) == true))
        {
            if (((player.getPosition().y < 448))&&(x >= 0))
            {
                x= x-playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }  else if (x > 0)
            {
                x= x-playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }             
        }
        if ((control_keys[2] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::W) == true))
        {
            if (y != 0)
            {
                y= y-playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }             
        }
        if ((control_keys[3] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::S) == true))
        {
            if (y < 1024-128)
            {
                y= y+playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }          
        }

        control_keys[0] = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
		control_keys[1] = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
		control_keys[2] = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
		control_keys[3] = sf::Keyboard::isKeyPressed(sf::Keyboard::S);        
    } else if (inverted == true)
    {
        if ((control_keys[1] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::A) == true))
        {
            if (((player.getPosition().y < 448))&&(x < 1024))
            {
                x= x+playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }  else if (x < 960)
            {
                x= x+playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }
            
        }
        if ((control_keys[0] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::D) == true))
        {
            if (((player.getPosition().y < 448))&&(x >= 0))
            {
                x= x-playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }  else if (x > 0)
            {
                x= x-playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }             
        }
        if ((control_keys[3] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::S) == true))
        {
            if (y != 0)
            {
                y= y-playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }             
        }
        if ((control_keys[2] == false) && (sf::Keyboard::isKeyPressed(sf::Keyboard::W) == true))
        {
            if (y < 1024-128)
            {
                y= y+playerSpeed;
                player.setPosition(sf::Vector2f(x,y));
            }          
        }

        control_keys[0] = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
		control_keys[1] = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
		control_keys[2] = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
		control_keys[3] = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
    }
    }    
    }

    ~Player(){};
};

#endif
