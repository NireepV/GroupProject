#include <SFML/Graphics.hpp>
#include <string>

class OOPGame
{
private:
    sf::RenderWindow *win;
public:
    OOPGame(int size, std::string Title){
        win = new sf::RenderWindow(sf::VideoMode(size, size), Title);
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
            win->display();
        }
    }
    ~OOPGame(){
        delete win;
    }
};



int main(){
    OOPGame a(1000,"Doodle Jump");
    a.run();
}