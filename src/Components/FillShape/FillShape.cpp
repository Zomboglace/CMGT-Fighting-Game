/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * FillShape.cpp
*/

#include "FillShape.hpp"

fg::FillShape::FillShape()
    : _percentageFilled(1),
    _realTimePercentageFilled(1),
    _targetPercentageFilled(1)
{}

void fg::FillShape::initialize(sf::Color outlineColor, sf::Color fillColor, sf::Color backgroundColor)
{
    _shape.setFillColor(fillColor);
    _background.setOutlineThickness(2);
    _background.setFillColor(backgroundColor);
    _background.setOutlineColor(outlineColor);
    setSize(100, 20);
}

void fg::FillShape::update()
{
    lerpUpdate();
}

void fg::FillShape::draw(sf::RenderWindow &window)
{
    window.draw(_background);
    window.draw(_shape);
}

void fg::FillShape::setPosition(float x, float y)
{
    _position = sf::Vector2f(x, y);
    _shape.setPosition(_position);
    _background.setPosition(_position);
}

void fg::FillShape::setSize(float x, float y)
{
    _size = sf::Vector2f(x, y);
    _shape.setSize(_size);
    _background.setSize(_size);
}

void fg::FillShape::setOutlineThickness(float thickness)
{
    _shape.setOutlineThickness(thickness);
}

void fg::FillShape::setOutlineColor(sf::Color color)
{
    _outlineColor = color;
    _background.setOutlineColor(_outlineColor);
}

void fg::FillShape::setFillColor(sf::Color color)
{
    _fillColor = color;
    _shape.setFillColor(_fillColor);
}

void fg::FillShape::setBackgroundColor(sf::Color color)
{
    _backgroundColor = color;
    _background.setFillColor(_backgroundColor);
}

void fg::FillShape::setPercentageFilled(float percentage)
{
    _percentageFilled = percentage;
    _shape.setSize(sf::Vector2f(_size.x * _percentageFilled, _size.y));
}

void fg::FillShape::setLerpTimeInSeconds(float time)
{
    _lerpTime = time;
}

void fg::FillShape::lerpPercentageFilled(float targetPercentage)
{
    _percentageFilled = _realTimePercentageFilled;
    _targetPercentageFilled = targetPercentage;
    _lerpClock.restart();
    _lerpTime = 3.0f;
}

void fg::FillShape::lerpUpdate()
{
    if (_realTimePercentageFilled != _targetPercentageFilled)
    {
        float time = _lerpClock.getElapsedTime().asSeconds();
        if (time > _lerpTime) {
            setPercentageFilled(_targetPercentageFilled);
        }
        _realTimePercentageFilled = _percentageFilled + (_targetPercentageFilled - _percentageFilled) * (time / _lerpTime);
        _shape.setSize(sf::Vector2f(_size.x * _realTimePercentageFilled, _size.y));
    }
}

sf::Vector2f fg::FillShape::getPosition()
{
    return _position;
}

sf::Vector2f fg::FillShape::getSize()
{
    return _size;
}

sf::Color fg::FillShape::getOutlineColor()
{
    return _outlineColor;
}

sf::Color fg::FillShape::getFillColor()
{
    return _fillColor;
}

sf::Color fg::FillShape::getBackgroundColor()
{
    return _backgroundColor;
}

float fg::FillShape::getPercentageFilled()
{
    return _percentageFilled;
}

float fg::FillShape::getTargetPercentageFilled()
{
    return _targetPercentageFilled;
}