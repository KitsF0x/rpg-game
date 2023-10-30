#include <SFML/Graphics.hpp>
#include "Grass.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
    sf::CircleShape shape(100.f);

    kf::Grass grass;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        grass.update(1.0f);
        grass.render(window);
        window.display();
    }

    return 0;
}