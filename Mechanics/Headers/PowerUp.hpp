#include <SFML/Graphics.hpp>

#ifndef POWERUP_H
#define POWERUP_H

class PowerUp
{
public:
    bool typeBox; // if type is 1 then the power up will be an extra life if the type is zero the power up will make the keys invert
    int maxLives;
};

#endif