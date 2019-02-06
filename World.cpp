#include "World.h"
#include "Player.h"

World::World() : m_window(sf::VideoMode(800.f, 600.f), "hello")
{
    //ctor
}

World::~World()
{
    //dtor
}

void World::Run()
{
    Player player1;

    // Main loop that continues until we call Close()
    while (m_window.isOpen())
    {
        // Handle any pending SFML events
        // These cover keyboard, mouse,joystick etc.
        sf::Event event;
        while (m_window.pollEvent(event))
        {
            switch(event.type)
            {
            case sf::Event::Closed:
                m_window.close();
                break;
            case sf::Event::KeyPressed:
                player1.Move(event);
            default:
                break;
            }
        }

        m_window.clear();
        player1.Render(m_window);
        m_window.display();
    }
}
