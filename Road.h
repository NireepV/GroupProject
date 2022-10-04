#include <SFML/Graphics.hpp>
#include <string>
#include "Surfaces.h"
#include <stdlib.h>
#include <time.h>

class Road : public Surfaces
{
private:
    int maxWidth;
    int size;
    int pos;
public:
    Road(){
        maxWidth = 400;
        srand(time(0));
        size = rand() % maxWidth + 60;
        pos = rand() % 1000 ;
        setColour(sf::Color(100,100,100));
        setSize(size);
        setPos(pos);
    }
    ~Road(){}
};