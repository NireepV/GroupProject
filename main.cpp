#include <SFML/Graphics.hpp>
#include <string>
#include "Player.h"
#include "Road.h"
#include "River.h"

class OOPGame
{
private:
    sf::RenderWindow *win;
    Player* frog;
    River* river;
    Road* road;
public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
        frog = new Player;
        river = new River;
        road = new Road;
    }
    void run()
    {
        while (win->isOpen())
        {
            sf::Event event;
            while (win->pollEvent(event))
            {
                if (event.type == sf::Event::Closed){
                    win->close();
                }
                
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                {
                    frog->moveRight();
                } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                {
                    frog->moveLeft();
                } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                {
                    frog->moveUp();
                } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                {
                    frog->moveDown();
                } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
                {
                    frog->scoring(win);
                }
                
            }

            win->clear(sf::Color(0,95,86));
            road->draw(win);
            river->draw(win);
            frog->draw(win);
            win->display();
        }
    }
    ~OOPGame(){
        delete win;
        delete frog;
        delete road;
        delete river;
    }
};



int main(){
    OOPGame a(1000,"Doodle Jump");
    a.run();
}