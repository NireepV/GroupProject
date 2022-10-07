#include <SFML/Graphics.hpp>
#include <string>
//#include "Mechanics/Player.cpp"
//#include "Mechanics/Headers/Road.h"
//#include "Mechanics/Headers/River.h"
#include "Mechanics/Headers/MapGen.h"
#include "Global.cpp"

class OOPGame
{
private:
    sf::RenderWindow *win;
    MapGen map;
    //Player* frog;
    //River* river;
    //River* road;
public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
        MapGen map;
        //frog = new Player;
        //river = new River;
        //road = new River;
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
            map.load("Map.png", sf::Vector2u(64, 64), level, 16, 15);
            win->draw(map);
            //road->draw(win);
            //river->draw(win);
            //frog->draw(win);
            win->display();
        }
    }
    ~OOPGame(){
        delete win;
        //delete frog;
        //delete road;
        //delete river;
    }
};



int main(){
    OOPGame a(1024,"Frogger");
    a.run();
}