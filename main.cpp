#include <SFML/Graphics.hpp>
#include <string>
#include "Mechanics/Player.cpp"
#include "Mechanics/Headers/Road.h"
#include "Mechanics/Headers/River.h"

class OOPGame
{
private:
    sf::RenderWindow *win;
    Player* frog;
    River* river;
    River* road;
public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
        frog = new Player;
        river = new River;
        road = new River;
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
    OOPGame a(2000,"Doodle Jump");
    a.run();
}