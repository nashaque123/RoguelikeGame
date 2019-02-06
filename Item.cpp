#include "Item.h"

Item::Item()
{
    //ctor
    m_shape.setRadius(2.f);
    m_shape.setFillColor(sf::Color::Red);
    m_position.x = rand() % 700 + 50;
    m_position.y = rand() % 500 + 50;
    m_shape.setPosition(m_position.x, m_position.y);
}

Item::~Item()
{
    //dtor
}

void Item::Render(sf::RenderWindow &window)
{
    window.draw(m_shape);
}
