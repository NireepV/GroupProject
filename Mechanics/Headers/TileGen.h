#include <SFML/Graphics.hpp>
#include <string>

#ifndef TILEGEN_H
#define TILEGEN_H

class TileGen
{
    public:
        sf::Vector2f* pos;
        sf::Texture* texture;
        sf::Sprite* sprite;
        TileGen(std::string name,float,float){}
        ~TileGen(){}
};

#endif