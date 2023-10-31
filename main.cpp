#include <SFML/Graphics.hpp>
#include "Grass.hpp"
#include "MapFileLoader.hpp"

int main()
{
    kf::MapFileLoader loader;
    auto blocks = loader.load("map.txt");

    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
    sf::CircleShape shape(100.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (auto& el : blocks) {
            el->render(window);
            el->update(1.0f);
        }
        window.display();
    }

    return 0;
}