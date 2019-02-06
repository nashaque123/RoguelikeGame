#ifndef WORLD_H
#define WORLD_H

#include <SFML/Graphics.hpp>

class World
{
public:
    World();
    ~World();

    void Run();

protected:

private:
    // Create an instance of the SFML RenderWindow type which represents the display
    // and initialise its size and title text
    sf::RenderWindow m_window;
};

#endif // WORLD_H
