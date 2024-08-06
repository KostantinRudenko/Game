#include <SFML/Graphics.hpp>
#include <iostream>
#include "Math.h"
#include "NPC/Man/Man.h"

using namespace sf;
using namespace std;

int main()
{
    Math math;

    Vector2i VF(0, 0);
    Vector2f D(100, 100);
    Vector2i mousePosition(0, 0);
    Vector2f mousePositionF(0, 0);
    Vector2f spritePos(0, 0);

    float dist = 0;

    Texture t;
    t.loadFromFile("./NPC/Miner/minerAnim-Sheet.png");
    Man man(t, 32, 48);
    man.setPosition(Vector2f(0, 0));
    man.setFrame(VF);

    sf::RenderWindow window(sf::VideoMode(1366, 786), "Game");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (Mouse::isButtonPressed(Mouse::Button::Left))
        {
            mousePosition = Mouse::getPosition();
            mousePositionF.x = mousePosition.x;
            mousePositionF.y = mousePosition.y;
        }

        VF.x %= 5;
        spritePos = man.getPosition();
        dist = math.getDistance(spritePos - mousePositionF);
        window.clear();
        man.setFrame(VF);
        
        if (dist > 1)
        {
            man.setPosition(spritePos + math.getNormalised(mousePositionF - spritePos));
        }
        man.drawOn(window);
        window.display();

        VF.x += 1;
    }

    return 0;
}