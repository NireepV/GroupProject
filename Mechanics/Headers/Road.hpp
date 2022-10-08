#include <SFML/Graphics.hpp>
#include <string>
#include <stdlib.h>
#include <time.h>

class River
{
private:
    sf::RectangleShape* river;
    int maxWidth;
    int size;
    int pos;
public:
    River(){
        river = new sf::RectangleShape();
        river->setFillColor(sf::Color(100,100,100));
        maxWidth = 400;
        srand(time(0));
        size = rand() % maxWidth + 60;
        pos = rand() % 1000;
        river->setPosition(sf::Vector2f(0,pos));
        river->setSize(sf::Vector2f(1000,size));
    }

    void draw(sf::RenderWindow* win){
        win->draw(*river);
    }

    ~River(){}
};