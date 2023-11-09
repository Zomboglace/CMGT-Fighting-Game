/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * TextBubbleShape.hpp
*/

#pragma once

#include <iostream>
#include "Rectangle.hpp"
#include "Text.hpp"
#include "Origin.hpp"

namespace fg
{
    class TextBubbleShape
    {
        public:
            TextBubbleShape();
            ~TextBubbleShape() = default;

            void initialize(std::string text, sf::Color fillColor = sf::Color::Black, sf::Color outlineColor = sf::Color::Red);
            
            void event(sf::RenderWindow &window, sf::Event &event);
            void draw(sf::RenderWindow &window);

            void setPosition(float x, float y);
            void setSize(float width, float height);
            void setFillColor(sf::Color color);
            void setOutlineColor(sf::Color color);
            void setOutlineThickness(float thickness);
            void setText(std::string text);

            void setDisplay(bool display);

            fg::Rectangle &getBackground();
            fg::Text &getText();

        private:
            fg::Rectangle _background;
            fg::Text _text;
            bool _display;
    };
}