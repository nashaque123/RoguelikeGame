#include "World.h"
#include "Player.h"
#include "Map.h"
#include "Item.h"

World::World() : m_window(sf::VideoMode(800.f, 600.f), "hello")
{
    //ctor
    m_player1 = new Player();
}

World::~World()
{
    //dtor
    delete m_player1;
    m_player1 = nullptr;
}

void World::Run()
{
    Map gameMap;
    Item items[3];

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
                m_player1->Move(event, gameMap);
            default:
                break;
            }
        }

        m_window.clear();

        gameMap.Render(m_window);
        m_player1->Render(m_window);

        for (int i = 0; i < 3; i++)
            items[i].Render(m_window);

        m_window.display();
    }
}
