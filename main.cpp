#include <SFML/Graphics.hpp>
#include <string>
#include "Mechanics/Player.cpp"
#include "Mechanics/Headers/Road.h"
#include "Mechanics/Headers/River.h"
#include "Mechanics/MapGen.cpp"

class OOPGame
{
private:
    sf::RenderWindow *win;
    MapGen* map;
    //Player* frog;
    //River* river;
    //River* road;
public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
        map = new MapGen;

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

            for (int i = 0; i < map->gridLength; i++)
            {
                for (int j = 0; j < map->gridLength-1; j++)
                {
                    win->draw(*map->tiles[i][j]->sprite);
                }
                
            }
            

            //road->draw(win);
            //river->draw(win);
            //frog->draw(win);
            win->display();
        }
    }
    ~OOPGame(){
        delete win;
        delete map;
        //delete frog;
        //delete road;
        //delete river;
    }
};



int main(){
    OOPGame a(256,"Doodle Jump");
    a.run();
}