#ifndef ITEM_H
#define ITEM_H

#include <SFML/Graphics.hpp>

class Item
{
public:
    Item();
    virtual ~Item();

    void Render(sf::RenderWindow &window);

protected:

private:
    sf::CircleShape m_shape;
    sf::Vector2f m_position;
};

#endif // ITEM_H
