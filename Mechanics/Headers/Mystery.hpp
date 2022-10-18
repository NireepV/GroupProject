#include <SFML/Graphics.hpp>
#include "PowerUp.hpp"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#ifndef MYSTERY_H
#define MYSTERY_H

class Mystery : public PowerUp
{
public:
    sf::Texture texture;
    sf::Sprite box;
    bool touched;
    int x;
    int y;

    Mystery(){
        spawn();
        srand(time(NULL));
        typeBox = rand()%2 ; //Should give either 1 or 0 as a result thus making the mystery box random
    }

    ~Mystery(){};

    void spawn(){

        srand(time(NULL));
        int randx;
        int randy;
        randx = rand()%960;
        randy = rand()%192 + 640; //Should give a value between 640 and 831

        if (!(randx % 64 == 0))
        {
            while (!(randx % 64 == 0))
            {
                randx = randx + 1;
            }
        }
        if (!(randy % 64 == 0))
        {
            while (!(randy % 64 == 0))
            {
                randy = randy + 1;
            }
        }
        x = randx;
        y = randy;
        texture.loadFromFile("/Users/user/Documents/VScode/ObjectOrientedProgramming/Group Project/GroupProject/Mechanics/Headers/Mystery.png");
        box.setTexture(texture);
        box.setPosition(sf::Vector2f(x,y));
    }

    void moveOffScreen(){
        if (touched == true)
        {
            box.setPosition(sf::Vector2f(1024,0));
        }
   
    }

    void draw(sf::RenderWindow *win){
        win->draw(box);
    }

};




#endif