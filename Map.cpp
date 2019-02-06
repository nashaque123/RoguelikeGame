#include "Map.h"

Map::Map()
{
    //ctor
    m_wall.setSize(sf::Vector2f(m_wallSize, m_wallSize));
    m_wall.setFillColor(sf::Color::Blue);
}

Map::~Map()
{
    //dtor
}

void Map::Render(sf::RenderWindow &window)
{
    m_position = {20.f, 20.f};
    m_positionsVector.push_back(m_position);

    for (int row = 0; row < kGridRows; row++)
    {
        for (int col = 0; col < kGridCols; col++)
        {
            if (m_map[row][col] == 'W')
            {
                m_wall.setPosition(m_position);
                m_positionsVector.push_back(m_position);
                window.draw(m_wall);
            }

            m_position += sf::Vector2f(m_wallSize, 0.f);
        }

        m_position += sf::Vector2f((-kGridCols * m_wallSize), m_wallSize);
    }
}
