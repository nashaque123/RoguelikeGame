#include "Player.h"
#include "Map.h"
#include <iostream>

Player::Player()
{
    //ctor
    // Create an instance of the SFML CircleShape and initialise it so radius is 100 and set to green
    m_shape.setRadius((m_stepSize / 2));
    m_shape.setFillColor(sf::Color::Green);
    m_shape.setPosition(m_position);
}

Player::~Player()
{
    //dtor
}

void Player::Move(sf::Event event, Map& wall)
{
    switch(event.key.code)
    {
    case sf::Keyboard::Up:
        if (!UpWallCollision(wall))
            m_position.y -= m_stepSize;
        break;
    case sf::Keyboard::Down:
        if (!DownWallCollision(wall))
            m_position.y += m_stepSize;
        break;
    case sf::Keyboard::Left:
        if (!LeftWallCollision(wall))
            m_position.x -= m_stepSize;
        break;
    case sf::Keyboard::Right:
        if (!RightWallCollision(wall))
            m_position.x += m_stepSize;
        break;
    default:
        break;
    }

    m_shape.setPosition(m_position);
}

//Checks if there will be a collision with the wall if they move upwards
//Checks step ahead to see if there is a wall in the way
bool Player::UpWallCollision(Map& wall)
{
    std::vector<sf::Vector2f> wallPositions = wall.GetPositions();

    for (unsigned int i = 0; i < wallPositions.size(); i++)
    {
        float distance = m_position.y - (wallPositions[i].y + wall.GetSize());

        if (m_position.x == wallPositions[i].x && distance < m_stepSize && distance >= 0)
            return true;
    }

    return false;
}

//Checks if there will be a collision with the wall if they move downwards
bool Player::DownWallCollision(Map& wall)
{
    std::vector<sf::Vector2f> wallPositions = wall.GetPositions();

    for (unsigned int i = 0; i < wallPositions.size(); i++)
    {
        float distance = wallPositions[i].y - (m_position.y + m_stepSize);

        if (m_position.x == wallPositions[i].x && distance < m_stepSize && distance >= 0)
            return true;
    }

    return false;
}

//Checks if there will be a collision with the wall if they move to the left
bool Player::LeftWallCollision(Map& wall)
{
    std::vector<sf::Vector2f> wallPositions = wall.GetPositions();

    for (unsigned int i = 0; i < wallPositions.size(); i++)
    {
        float distance = m_position.x - (wallPositions[i].x + wall.GetSize());

        if (m_position.y == wallPositions[i].y && distance < m_stepSize && distance >= 0)
            return true;
    }

    return false;
}

//Checks if there will be a collision with the wall if they move to the right
bool Player::RightWallCollision(Map& wall)
{
    std::vector<sf::Vector2f> wallPositions = wall.GetPositions();

    for (unsigned int i = 0; i < wallPositions.size(); i++)
    {
        float distance = wallPositions[i].x - (m_position.x + m_stepSize);

        if (m_position.y == wallPositions[i].y && distance < m_stepSize && distance >= 0)
            return true;
    }

    return false;
}

void Player::Render(sf::RenderWindow& window)
{
    window.draw(m_shape);
}
