#include "Player.h"

Player::Player()
{
    //ctor
    // Create an instance of the SFML CircleShape and initialise it so radius is 100 and set to green
    m_shape.setRadius(10.f);
    m_shape.setFillColor(sf::Color::Green);
    m_shape.setPosition(m_position.x, m_position.y);
}

Player::~Player()
{
    //dtor
}

void Player::Move(sf::Event event)
{
    switch(event.key.code)
    {
    case sf::Keyboard::Numpad1:
        m_position.x -= m_stepSize;
        m_position.y += m_stepSize;
        break;
    case sf::Keyboard::Numpad2:
        m_position.y += m_stepSize;
        break;
    case sf::Keyboard::Numpad3:
        m_position.x += m_stepSize;
        m_position.y += m_stepSize;
        break;
    case sf::Keyboard::Numpad4:
        m_position.x -= m_stepSize;
        break;
    case sf::Keyboard::Numpad6:
        m_position.x += m_stepSize;
        break;
    case sf::Keyboard::Numpad7:
        m_position.x -= m_stepSize;
        m_position.y -= m_stepSize;
        break;
    case sf::Keyboard::Numpad8:
        m_position.y -= m_stepSize;
        break;
    case sf::Keyboard::Numpad9:
        m_position.x += m_stepSize;
        m_position.y -= m_stepSize;
        break;
    default:
        break;
    }

    m_shape.setPosition(m_position.x, m_position.y);
}

void Player::Render(sf::RenderWindow& window)
{
    window.draw(m_shape);
}
