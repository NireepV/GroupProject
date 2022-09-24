#include <SFML/Graphics.hpp>
#include <string>
#include "Player.h"

class OOPGame
{
private:
    sf::RenderWindow *win;
    Player* frog;
public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
        frog = new Player;
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

            win->clear();
            frog->draw(win);
            win->display();
        }
    }
    ~OOPGame(){
        delete win;
        delete frog;
    }
};



int main(){
    OOPGame a(1000,"Doodle Jump");
    a.run();
}