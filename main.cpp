#include <SFML/Graphics.hpp>
#include <string>
#include "Player1.h"

class OOPGame
{
private:
    sf::RenderWindow *win;
    Player* doodle;
public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
        doodle = new Player;
    }
    void run()
    {
        while (win->isOpen())
        {
            sf::Event event;
            while (win->pollEvent(event))
            {

                if (event.type == sf::Event::Closed)
                    win->close();
            }

            win->clear();
            doodle->draw(win);
            win->display();
        }
    }
    ~OOPGame(){
        delete win;
        delete doodle;
    }
};



int main(){
    OOPGame a(1000,"Doodle Jump");
    a.run();
}