/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Text.cpp
*/

#include "Text.hpp"

fg::Text::Text()
{}

fg::Text::Text(sf::Sprite &object)
    : _linkedObject(object)
{}

void fg::Text::initialize(std::string fontFilepath, std::string textString, int size, sf::Color color, float x, float y)
{
    sf::Font font;
    if (!font.loadFromFile(fontFilepath))
    {
        std::cout << "Error loading font" << std::endl;
    }
    _font = std::make_shared<sf::Font>(font);

    _text.setFont(*_font);
    _text.setString(textString);
    _text.setCharacterSize(size);
    _text.setFillColor(color);
    setPosition(x, y);
}

void fg::Text::initialize(sf::Sprite &object, std::string fontFilepath, std::string textString, int size, sf::Color color, float x, float y)
{
    sf::Font font;
    if (!font.loadFromFile(fontFilepath))
    {
        std::cout << "Error loading font" << std::endl;
    }
    _font = std::make_shared<sf::Font>(font);

    _text.setFont(*_font);
    _text.setString(textString);
    _text.setCharacterSize(size);
    _text.setFillColor(color);
    setPositionRelativeToObject(object, x, y);
}

void fg::Text::draw(sf::RenderWindow &window)
{
    window.draw(_text);
}

void fg::Text::setPosition(float x, float y)
{
    _text.setPosition(x, y);
}

void fg::Text::setPositionRelativeToObject(sf::Sprite &object, float x, float y)
{
    // if object is not set cancel
    if (object.getTexture() == nullptr)
    {
        std::cout << "Error: object not set" << std::endl;
        return;
    }

    // text in the middle of the object
    _text.setPosition(object.getPosition().x + (object.getGlobalBounds().width / 2) - (_text.getGlobalBounds().width / 2) + x, object.getPosition().y + (object.getGlobalBounds().height / 2) - (_text.getGlobalBounds().height / 2) + y);
}

void fg::Text::setText(std::string textString)
{
    _text.setString(textString);
}

std::shared_ptr<sf::Font> fg::Text::getFont()
{
    return _font;
}

sf::Text &fg::Text::getText()
{
    return _text;
}
