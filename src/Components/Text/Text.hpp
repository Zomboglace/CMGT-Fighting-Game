/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Text.hpp
*/

#pragma once

#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>

namespace fg
{
    class Text
    {
        public:
            Text();
            Text(sf::Sprite &object);
            ~Text() = default;

            void initialize(std::string fontFilepath, std::string textString, int size, sf::Color color = sf::Color::White, float x = 0, float y = 0);
            void initialize(sf::Sprite &object, std::string fontFilepath, std::string textString, int size, sf::Color color = sf::Color::White, float x = 0, float y = 0);

            void draw(sf::RenderWindow &window);

            void setPosition(float x, float y);
            void setPositionRelativeToObject(sf::Sprite &object, float x, float y);
            void setText(std::string textString);

            std::shared_ptr<sf::Font> getFont();
            sf::Text &getText();

        private:
            std::shared_ptr<sf::Font> _font;
            sf::Text _text;
            sf::Sprite _linkedObject;
    };
};