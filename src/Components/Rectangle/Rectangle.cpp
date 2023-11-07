/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Rectangle.cpp
*/

#include "Rectangle.hpp"

fg::Rectangle::Rectangle()
{}

void fg::Rectangle::initialize(sf::Color outlineColor, sf::Color fillColor)
{
    _shape.setFillColor(fillColor);
    _shape.setOutlineThickness(2);
    _shape.setOutlineColor(outlineColor);
}

void fg::Rectangle::update()
{
}

void fg::Rectangle::draw(sf::RenderWindow &window)
{
    window.draw(_shape);
}

void fg::Rectangle::setPosition(float x, float y)
{
    _shape.setPosition(x, y);
}

void fg::Rectangle::setSize(float x, float y)
{
    _shape.setSize(sf::Vector2f(x, y));
}

void fg::Rectangle::setOutlineThickness(float thickness)
{
    _shape.setOutlineThickness(thickness);
}

void fg::Rectangle::setOutlineColor(sf::Color color)
{
    _shape.setOutlineColor(color);
}

void fg::Rectangle::setFillColor(sf::Color color)
{
    _shape.setFillColor(color);
}

sf::Vector2f fg::Rectangle::getPosition()
{
    return _shape.getPosition();
}

sf::Vector2f fg::Rectangle::getSize()
{
    return _shape.getSize();
}

sf::Color fg::Rectangle::getOutlineColor()
{
    return _shape.getOutlineColor();
}

sf::Color fg::Rectangle::getFillColor()
{
    return _shape.getFillColor();
}

sf::RectangleShape &fg::Rectangle::getShape()
{
    return _shape;
}