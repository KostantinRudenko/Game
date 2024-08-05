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

    Texture t;
    t.loadFromFile("./NPC/Miner/minerAnim-Sheet.png");
    Man man(t, 32, 48);
    man.setPosition(Vector2f(0, 0));

    sf::RenderWindow window(sf::VideoMode(800, 600), "Game");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        VF.x %= 5;
        Vector2f spritePos = man.getPosition();
        float dist = math.getDistance(spritePos - D);
        cout << dist << endl;
        window.clear();
        man.setFrame(VF);
        
        if (dist > 1)
        {
            man.setPosition(spritePos + math.getNormalised(D - spritePos));
        }
        else
        {
            cin >> D.x;
            cin >> D.y;
        }
        man.drawOn(window);
        window.display();

        VF.x += 1;
    }

    return 0;
}