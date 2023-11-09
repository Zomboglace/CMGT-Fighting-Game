/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * TextBubbleShape.cpp
*/

#include "TextBubbleShape.hpp"

fg::TextBubbleShape::TextBubbleShape()
    : _display(false)
{
}

void fg::TextBubbleShape::initialize(std::string text, sf::Color fillColor, sf::Color outlineColor)
{
    _background.initialize(outlineColor, fillColor);
    _text.initialize("assets/arial.ttf", text, 20, sf::Color::White);
    _background.setSize(_text.getText().getGlobalBounds().width + 20, _text.getText().getGlobalBounds().height + 20);
}

void fg::TextBubbleShape::event(sf::RenderWindow &window, sf::Event &event)
{
    if (event.type == sf::Event::MouseMoved) {
        sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
        _background.setPosition(mousePosition.x - _background.getSize().x, mousePosition.y - _background.getSize().y);
        _text.setPosition(_background.getPosition().x, _background.getPosition().y);
    }
}

void fg::TextBubbleShape::draw(sf::RenderWindow &window)
{
    if (_display) {
        _background.draw(window);
        _text.draw(window);
    }
}

void fg::TextBubbleShape::setPosition(float x, float y)
{
    _background.setPosition(x, y);
    _text.setPosition(x, y);
}

void fg::TextBubbleShape::setSize(float width, float height)
{
    _background.setSize(width, height);
}

void fg::TextBubbleShape::setFillColor(sf::Color color)
{
    _background.setFillColor(color);
}

void fg::TextBubbleShape::setOutlineColor(sf::Color color)
{
    _background.setOutlineColor(color);
}

void fg::TextBubbleShape::setOutlineThickness(float thickness)
{
    _background.setOutlineThickness(thickness);
}

void fg::TextBubbleShape::setText(std::string text)
{
    _text.setText(text);
    _background.setSize(_text.getText().getGlobalBounds().width + 20, _text.getText().getGlobalBounds().height + 20);
}

void fg::TextBubbleShape::setDisplay(bool display)
{
    _display = display;
}

fg::Rectangle &fg::TextBubbleShape::getBackground()
{
    return _background;
}

fg::Text &fg::TextBubbleShape::getText()
{
    return _text;
}