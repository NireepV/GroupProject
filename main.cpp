#include <SFML/Graphics.hpp>
#include <string>
#include "Mechanics/Headers/Player.hpp"
#include "Mechanics/Headers/MapGen.hpp"
#include "Mechanics/Headers/Mystery.hpp"
#include "Global.cpp"

class OOPGame
{
private:
    sf::RenderWindow *win;
    MapGen map;
    Player* frog;
    Mystery box;

public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
        MapGen map;
        Mystery box;
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
                
            }

            win->clear(sf::Color(0,95,86));
            map.load("Map.png", sf::Vector2u(64, 64), level, 16, 15);
            win->draw(map);
            box.draw(win);
            frog->movement();
            frog->waterEdgeDetect();
            frog->collision();
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
    OOPGame a(1024,"Frogger");
    a.run();
}