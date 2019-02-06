#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Map;

class Player
{
public:
    Player();
    ~Player();

    void Move(sf::Event event, Map& wall);
    bool UpWallCollision(Map& wall);
    bool DownWallCollision(Map& wall);
    bool LeftWallCollision(Map& wall);
    bool RightWallCollision(Map& wall);

    void Render(sf::RenderWindow& window);

protected:

private:
    sf::CircleShape m_shape;
    sf::Vector2f m_position{80.f, 80.f};
    float m_stepSize{20.f};

    //std::vector<sf::Vector2f> m_wallPositions
};

#endif // PLAYER_H
