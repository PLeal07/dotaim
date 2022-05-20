#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML is working");
    sf::CircleShape shape(100.0f);
    shape.setFillColor(sf::Color::White);

    while(window.isOpen())
    {
        sf::Event ev;
        while(window.pollEvent(ev))
        {
            if(ev.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}