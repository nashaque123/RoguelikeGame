#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    sf::RenderWindow window(sf::VideoMode(500.f, 500.f), "hello");
    sf::CircleShape circle;
    circle.setRadius(100.f);
    circle.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        // Handle any pending SFML events
        // These cover keyboard, mouse,joystick etc.
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            default:
                break;
            }
        }
        window.clear();
        window.draw(circle);
        window.display();

    }

    return 0;
}
