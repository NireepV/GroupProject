#include <SFML/Graphics.hpp>
#include <string>

void OOPGame(int size, std::string Title)
{
    sf::RenderWindow window(sf::VideoMode(size, size), Title);
    sf::Texture texture;
    sf::Image image;
    image.loadFromFile("test.png");
    texture.loadFromImage(image);

    sf::Sprite sprite;
    sprite.setTexture(texture);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }
}

int main(){
    OOPGame(1000,"Doodle Jump");
}