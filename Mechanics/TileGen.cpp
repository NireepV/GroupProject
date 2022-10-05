#include "Headers/TileGen.h"
#include <string>

TileGen::TileGen(std::string name,float a,float b){
    pos = new sf::Vector2f(a,b);
    sprite->setPosition(*pos);
    texture->loadFromFile(name);
    texture->setSmooth(true);
    sprite->setTexture(*texture);
    sprite->setTextureRect(sf::IntRect(0,0,16,16));
}