/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Text.hpp
*/

#pragma once

#include <iostream>
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
            void setPosition(float x, float y);
            void setPositionRelativeToObject(sf::Sprite &object, float x, float y);
            void setText(std::string textString);

            sf::Text &getText();

        private:
            sf::Font _font;
            sf::Text _text;
            sf::Sprite _linkedObject;
    };
};