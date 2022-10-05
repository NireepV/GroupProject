#include <SFML/Graphics.hpp>
#include <string>

#ifndef TILEGEN_H
#define TILEGEN_H

class TileGen
{
    private:
        sf::Vector2f* pos;
        sf::Texture* texture;

    public:
        sf::Sprite* sprite;
        TileGen(std::string name,float,float){}
        ~TileGen(){}
};

#endif