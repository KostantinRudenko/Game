#include <SFML/Graphics.hpp>
#include <iostream>
#include "Math.h"
#include "NPC/Man/Man.h"
#include "Blocks/Block.h"

using namespace sf;
using namespace std;

int main()
{
    Math math;

    Texture t;
    t.loadFromFile("./NPC/Miner/minerAnim-Sheet.png");
    Man man(t, 32, 48);

    Texture t2;
    t2.loadFromFile("./Blocks/Textures/grass.png");
    Block block(t2, Vector2f(64, 32), 0, 0);

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
        block.drawOn(window);
        man.drawOn(window);
        window.display();
    }

    return 0;
}