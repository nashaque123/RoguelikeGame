#ifndef MAP_H
#define MAP_H

#include <SFML/Graphics.hpp>
#include <vector>

class Map
{
public:
    Map();
    ~Map();

    void Render(sf::RenderWindow &window);
    const std::vector<sf::Vector2f> GetPositions()
    {
        return m_positionsVector;
    }
    const float GetSize()
    {
        return m_wallSize;
    }

protected:

private:
    sf::RectangleShape m_wall;
    const float m_wallSize{20.0f};
    sf::Vector2f m_position;
    std::vector<sf::Vector2f> m_positionsVector;
    const int kGridRows = 10, kGridCols = 10;

    char m_map[10][10] =
    {
        { 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'  },
        { 'W', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'W'  },
        { 'W', ' ', 'W', 'W', 'W', 'W', 'W', 'W', ' ', 'W'  },
        { 'W', ' ', ' ', ' ', ' ', 'W', ' ', ' ', ' ', 'W'  },
        { 'W', ' ', 'W', 'W', 'W', 'W', 'W', 'W', ' ', 'W'  },
        { 'W', ' ', 'W', ' ', 'W', ' ', 'W', ' ', 'W', 'W'  },
        { 'W', ' ', 'W', ' ', 'W', ' ', 'W', ' ', ' ', 'W'  },
        { 'W', ' ', 'W', ' ', 'W', ' ', 'W', 'W', ' ', 'W'  },
        { 'W', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'W'  },
        { 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'  }
    };
};

#endif // MAP_H
