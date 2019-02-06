#ifndef MAP_H
#define MAP_H

#include <SFML/Graphics.hpp>

class Map
{
public:
    Map();
    ~Map();

    void Render(sf::RenderWindow &window);
protected:

private:
    sf::RectangleShape m_wall;
    float m_wallSize{50.0f};
    sf::Vector2f m_position;
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
