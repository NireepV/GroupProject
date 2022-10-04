#include <SFML/Graphics.hpp>
#include <string>
#include <time.h>
#include <stdlib.h>

class Surfaces
{
private:
    sf::RectangleShape* surface;
    int maxWidth;
    int size;
public:
    Surfaces(){
        maxWidth = 500;
        srand(time(0));
        size = rand() % maxWidth + 60;
        surface = new sf::RectangleShape();
        surface->setSize(sf::Vector2f(1000,100));
        surface->setPosition(0,500);
    };
    void draw(sf::RenderWindow* win){
        win->draw(*surface);
    }
    void setColour(sf::Color color){
        surface->setFillColor(color);
    };
    void setSize(int size){
        surface->setSize(sf::Vector2f(1000,size));
    };
    void setPos(int pos){
        surface->setPosition(sf::Vector2f(0,pos));
    };

    ~Surfaces(){}
};