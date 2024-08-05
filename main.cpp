#include <SFML/Graphics.hpp>
#include <iostream>
#include "Math.h"
#include "NPC/Man/Man.h"

using namespace sf;
using namespace std;

int main()
{
    Math math;

    std::string path = "./NPC/Miner/minerAnim-Sheet.png";
    Texture t;
    t.loadFromFile(path);
    Man man(t, 32, 48);

    sf::RenderWindow window(sf::VideoMode(800, 600), "Game");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        man.drawOn(window);
        window.display();
    }

    return 0;
}