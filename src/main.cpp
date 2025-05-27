#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Hello")

    sf::Event event;

    while(window.isOpen())
    {
        while(window.pollEvents(event))
        {
            if(event.type == sf::Event::Closed) window.close();
        }

        window.clear();
        window.display();
    }
}
