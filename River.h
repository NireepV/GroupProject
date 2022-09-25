#include <SFML/Graphics.hpp>
#include <string>
#include <stdlib.h>
#include <time.h>

class River : public Surfaces
{
private:
    int maxWidth;
    int size;
    int pos;
public:
    River(){
        maxWidth = 400;
        srand(time(0));
        size = rand() % maxWidth + 60;
        pos = rand() % 1000;
        setColour(sf::Color::Blue);
        setSize(size);
        setPos(pos - size);
    };
    ~River(){}
};
