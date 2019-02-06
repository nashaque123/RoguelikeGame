#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    ~Player();

    void Move(sf::Event event);
    void Render(sf::RenderWindow& window);

protected:

private:
    sf::CircleShape m_shape;
    sf::Vector2f m_position{100.f, 100.f};
    float m_stepSize{12.f};
};

#endif // PLAYER_H
