/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Rectangle.hpp
*/

#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

namespace fg
{
    class Rectangle
    {
        public:
            Rectangle();
            ~Rectangle() = default;

            void initialize(sf::Color outlineColor, sf::Color fillColor);

            void update();
            void draw(sf::RenderWindow &window);

            void setPosition(float x, float y);
            void setSize(float x, float y);
            void setOutlineThickness(float thickness);
            void setOutlineColor(sf::Color color);
            void setFillColor(sf::Color color);

            sf::Vector2f getPosition();
            sf::Vector2f getSize();
            sf::Color getOutlineColor();
            sf::Color getFillColor();

            sf::RectangleShape &getShape();


        private:
            sf::RectangleShape _shape;
    };
};