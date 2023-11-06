/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * HealthBar.cpp
*/

#include "HealthBar.hpp"

fg::HealthBar::HealthBar()
    : _health(100),
    _maxHealth(100)
{}

fg::HealthBar::HealthBar(int maxHealth)
    : _health(maxHealth),
    _maxHealth(maxHealth)
{}

fg::HealthBar::HealthBar(int maxHealth, int health)
    : _health(health),
    _maxHealth(maxHealth)
{}

void fg::HealthBar::initialize(sf::Color outlineColor, sf::Color fillColor, sf::Color backgroundColor)
{
    _healthBar.initialize(outlineColor, fillColor, backgroundColor);
}

void fg::HealthBar::update()
{
    _healthBar.update();
}

void fg::HealthBar::draw(sf::RenderWindow &window)
{
    _healthBar.draw(window);
}

void fg::HealthBar::setPosition(float x, float y)
{
    _healthBar.setPosition(x, y);
}

void fg::HealthBar::setSize(float x, float y)
{
    _healthBar.setSize(x, y);
}

void fg::HealthBar::addHealth(int health)
{
    _health += health;
    if (_health > _maxHealth)
        _health = _maxHealth;
    _healthBar.lerpPercentageFilled((float)_health / (float)_maxHealth);
}

void fg::HealthBar::removeHealth(int health)
{
    _health -= health;
    if (_health < 0)
        _health = 0;
    _healthBar.lerpPercentageFilled((float)_health / (float)_maxHealth);
}

void fg::HealthBar::setHealth(int health)
{
    _health = health;
    if (_health > _maxHealth)
        _health = _maxHealth;
    if (_health < 0)
        _health = 0;
    _healthBar.lerpPercentageFilled((float)_health / (float)_maxHealth);
}

void fg::HealthBar::setMaxHealth(int maxHealth)
{
    _maxHealth = maxHealth;
    if (_health > _maxHealth)
        _health = _maxHealth;
    if (_health < 0)
        _health = 0;
    _healthBar.lerpPercentageFilled((float)_health / (float)_maxHealth);
}

fg::FillShape &fg::HealthBar::getFillShape()
{
    return _healthBar;
}